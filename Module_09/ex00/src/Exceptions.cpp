/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 14:17:21 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/17 13:41:51 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchangeUtils.hpp"

const char* InputFileAccessException::what() const throw() {
    return ("Error: Input file not found.");
}

const char* InvalidArgsNumberException::what() const throw() {
    return ("Error: Invalid number of arguments.");
}

const char* DataBaseFileAccessException::what() const throw() {
    return ("Error: Database file not found.");
}

DataBaseFileCorruptedException::DataBaseFileCorruptedException(int& lineNum) {
    std::stringstream ss;
    ss << "Error: Database file corrupted at line " << lineNum;
    _errorMessage = ss.str();
}

const char* DataBaseFileCorruptedException::what() const throw() {
    return (_errorMessage.c_str());
}

const char* DataBaseEmptyException::what() const throw() {
    return ("Error: Database file is empty.");
}

InvalidFormatException::InvalidFormatException(std::string& line) {
    std::stringstream ss;
    ss << "Error: Invalid format at line " << line;
    _errorMessage = ss.str();
}

const char* InvalidFormatException::what() const throw() {
    return (_errorMessage.c_str());
}

InvalidDateException::InvalidDateException(std::string& line) {
    std::stringstream ss;
    ss << "Error: Invalid date at line " << line;
    _errorMessage = ss.str();
}

const char* InvalidDateException::what() const throw() {
    return (_errorMessage.c_str());
}

const char* NoPositiveNumberException::what() const throw() {
    return ("Error: No positive number found.");
}

const char* TooLargeNumberException::what() const throw() {
    return ("Error: Number too large.");
}