/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:10:19 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/17 12:25:12 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"
#include "../inc/BitcoinExchangeUtils.hpp"

BitcoinExchange::BitcoinExchange(std::string& inputDirectory)
    : _dataBaseDirectory("./db/data.csv"), _inputDirectory(inputDirectory)  {
        checkDataBase();
        parseDataBaseFile();
    }

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& src) {
    _dataBaseDirectory = src._dataBaseDirectory;
    _dataBase = src._dataBase;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& src) {
    if (this != &src) {
        _dataBaseDirectory = src._dataBaseDirectory;
        _dataBase = src._dataBase;
    }
    return (*this);
}

void BitcoinExchange::checkDataBase() {
    std::ifstream dataBaseFile(_dataBaseDirectory.c_str());
    if (!dataBaseFile.is_open()) {
        throw DataBaseFileAccessException();
    }
    
    std::string lineContent;
    int lineNum = 1;
    while (getline(dataBaseFile, lineContent)) {
        if (lineContent == "date,exchange_rate") {
            lineNum++;
            continue;
        }
        if (!checkFormat(lineContent)) {
            dataBaseFile.close();
            throw DataBaseFileCorruptedException(lineNum);
        }
        if (!checkExchangeRate(lineContent)) {
            dataBaseFile.close();
            throw DataBaseFileCorruptedException(lineNum);
        }
        lineNum++;
    }
    dataBaseFile.close();
}

void BitcoinExchange::parseDataBaseFile() {
    std::ifstream dataBaseFile(_dataBaseDirectory.c_str());

    if (!dataBaseFile.is_open())
        throw DataBaseFileAccessException();

    std::string lineContent;
    int date;
    double conversionRate;
    while (getline(dataBaseFile, lineContent)) {
        if (lineContent == "date,exchange_rate")
            continue;
        date = extractDate(lineContent);
        conversionRate = strtod(lineContent.substr(11, lineContent.length() - 11).c_str(), NULL);
        _dataBase[date] = conversionRate;
    }
    dataBaseFile.close();
    if (_dataBase.empty())
        throw DataBaseEmptyException();
}

void BitcoinExchange::processInput() {
    std::ifstream inputFile(_inputDirectory.c_str());
    if (!inputFile.is_open())
        throw InputFileAccessException();
    std::string line;
    while (getline(inputFile, line)) {
        try {
            checkBadInput(line);
            parseRequestLine(line);
        }
        catch (std::exception &e) {
            std::cout << BOLDRED << e.what() << RESET << std::endl;
        }
    }
    inputFile.close();
}

void BitcoinExchange::parseRequestLine(std::string& line) {
    if (line == "date | value")
        return ;
    int date = extractDate(line);
    double value = strtod(line.substr(12, line.length() - 12).c_str(), NULL);
    if (handleInvalidDate(line, date, value))
        return ;
        
    std::map<int, double>::iterator it = _dataBase.lower_bound(date);
    if (it->first == date)
        std::cout << line.substr(0, 10) << " => " << value << " = " << value * it->second << std::endl;
    else {
        it--;
        std::cout << line.substr(0, 10) << " => " << value << " = " << value * it->second
            << " (value from: " << it->first << ")" << std::endl;
    }
}

bool BitcoinExchange::handleInvalidDate(std::string& line, int& date, double& value) {
    std::map<int, double>::iterator it = _dataBase.begin();
    double firstDate = it->first;
    double lastDate = it->first;

    for (it = _dataBase.begin(); it != _dataBase.end(); it++) {
        if (it->first < firstDate)
            firstDate = it->first;
        if (it->first > lastDate)
            lastDate = it->first;
    }
    if (date < firstDate) {
        std::cout << line.substr(0, 10) << " => " << value << " = 0 (No data: date before earliest database entry)" << std::endl;
        return (true);
    }
    else if (date > lastDate) {
        std::cout << line.substr(0, 10) << " => " << value << " = 0 (No data: date after latest database entry)" << std::endl;
        return (true);
    }
    return (false);
}