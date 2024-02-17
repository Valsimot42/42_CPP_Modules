/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchangeUtils.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 10:58:27 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/17 11:09:44 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGEUTILS_HPP
# define BITCOINEXCHANGEUTILS_HPP

#include <iostream>
#include <sstream>
#include <exception>
#include <string>
#include <cstdlib>
#include <map>

void checkInput(int ac);
bool checkFormat(std::string& line);

bool checkDate(std::string& line);
bool checkYear(std::string& date);
bool checkMonth(std::string& date);
bool checkDay(std::string& date);
bool checkDate(std::string& date);
bool checkExchangeRate(std::string& line);

int extractDate(std::string& line);
void printMap(std::map<int, double>& map);

void checkBadInput(std::string& line);
void checkValue(std::string& line);


class InvalidInputException : public std::exception {
    public:
        virtual const char* what() const throw();
};

class InvalidArgsNumberException : public std::exception {
    public:
        virtual const char* what() const throw();
};

class DataBaseFileAccessException : public std::exception {
    public:
        virtual const char* what() const throw();
};

class DataBaseFileCorruptedException : public std::exception {
    private:
        std::string _errorMessage;
    public:
        DataBaseFileCorruptedException(int& lineNum);
        ~DataBaseFileCorruptedException() throw() {};
        virtual const char* what() const throw();
};

class DataBaseEmptyException : public std::exception {
    public:
        virtual const char* what() const throw();
};

class InputFileAccessException : public std::exception {
    public:
        virtual const char* what() const throw();
};

class InvalidFormatException : public std::exception {
    private:
        std::string _errorMessage;
    public:
        InvalidFormatException(std::string& line);
        ~InvalidFormatException() throw() {};
        virtual const char* what() const throw();
};

class InvalidDateException : public std::exception {
    private:
        std::string _errorMessage;
    public:
        InvalidDateException(std::string& line);
        ~InvalidDateException() throw() {};
        virtual const char* what() const throw();
};

class NoPositiveNumberException : public std::exception {
    public:
        virtual const char* what() const throw();
};

class TooLargeNumberException : public std::exception {
    public:
        virtual const char* what() const throw();
};

#endif