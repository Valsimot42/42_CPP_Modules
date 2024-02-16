/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:20:24 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/15 13:38:24 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <fstream>
#include <string>
#include <iomanip>
#include "Colors.hpp"

class BitcoinExchange {
private:
    std::map<int, double> _dataBase;

    std::string _inputDirectory;
    std::string _dataBaseDirectory;

public:
    BitcoinExchange(std::string& inputDirectory);
    BitcoinExchange(BitcoinExchange const &src);
    ~BitcoinExchange();
    BitcoingExchange &operator=(BitcoinExchange const &src);
};

void checkDataBase();
void parseDataBaseFile();

void processInput();
void praseRequestLine(std::string& line);
bool handleInvalidDate(std:;string& line, int& date, double& value);

void checkInput(int ac);
bool checkFormat(std::string& line);

bool checkDate(std::string& line);
bool checkYear(std::string& date);
bool checkMonth(std::string& date);
bool checkDay(std::string& date);
bool checkDate(std::string& date);
bool checkExchangeRate(std::string& line);

#endif