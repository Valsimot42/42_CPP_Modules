/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:20:24 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/17 12:17:40 by tbolkova         ###   ########.fr       */
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

    std::string _dataBaseDirectory;
    std::string _inputDirectory;

public:
    BitcoinExchange(std::string& inputDirectory);
    BitcoinExchange(BitcoinExchange const &src);
    ~BitcoinExchange();
    BitcoinExchange &operator=(BitcoinExchange const &src);
    
    void checkDataBase();
    void parseDataBaseFile();

    void processInput();
    void parseRequestLine(std::string& line);
    bool handleInvalidDate(std::string& line, int& date, double& value);
};

#endif