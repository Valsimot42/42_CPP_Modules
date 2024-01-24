/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:26:58 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/24 12:42:38 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"
#include "../inc/Colors.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &copy) {
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy) {
    if (this != &copy)
        *this = copy;
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::isChar(const std::string &argument) {
    if (argument[0] < '0' || argument[0] > '9')
        return (isValidChar(argument));
    return (false);
}

bool ScalarConverter::isValidDigit(const std::string &argument) {
    int length = argument.length();
    if (length == 0)
        return (false);
    if (length == 1 && (argument[0] == '-' || argument[0] == '+'))
        return (false);
    if (length > 1 && (argument[0] == '-' || argument[0] == '+') && argument[1] == '0')
        return (false);
    if (length > 1 && (argument[0] == '0' || argument[0] == '.') && argument[1] == 'f')
        return (false);
    int decimalPoint = 0;
    for (int i = 0; i < length; ++i) {
        if (!isdigit(argument[i])) {
            if (i == 0 && (argument[i] == '-' || argument[i] == '+'))
                continue ;
            if (argument[i] == '.' && decimalPoint == 0) {
                decimalPoint = 1;
                continue ;
            }
            if (i == length - 1 && argument[i] == 'f')
                continue ;
            else
                return (false);
        }
    }
    return (true);
}

bool ScalarConverter::isValidChar(const std::string &argument) {
    if (argument.length() == 1 && isChar(argument))
        return (true);
    return (false);
}

bool ScalarConverter::isValidInput(const std::string &argument) {
    if (isValidChar(argument) || isValidDigit(argument))
        return (true);
    if (argument == "nan" || argument == "nanf" || argument == "-inf" || argument == "inf" || argument == "-inff" || argument == "inff")
        return (true);
    return (false);
}

float ScalarConverter::convertToFloat(const std::string &argument) {
    char *ptr;
    std::string newArgument;
    float result;
    
    if (argument[argument.length() - 1] == 'f') {
        newArgument = argument.substr(0, argument.length() - 1);
        result = strtof(newArgument.c_str(), &ptr);
        return result;
    }
    std::isstringstream iss(argument);
    iss >> result;
    return result;
}

void ScalarConverter::printChar(const std::string convert) {
    if (isChar(convert)) {
        std::cout << "char: '" << convert << "'" << std::endl;
    }
    else if (convertToFloat(convert) > 32 && stringToFloat(convert) < 127) {
        std::cout << "char: '" << static_cast<char>(convertToFloat(convert)) << "'" << std::endl;
    }
    else if (convertToInt(convert) >= 0 stringToFloat <= 32){
        std::cout << "char: non displayable" << std::endl;
    }
    else
        std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::convertTypes(const std::string convert) {
    if (isValidInput(convert) == false) {
        std::cout << RED << "char: impossible" << RESET << std::endl;
        std::cout << RED << "int: impossible" << RESET << std::endl;
        std::cout << RED << "float: nanf" << RESET << std::endl;
        std::cout << RED << "double: nan" << RESET << std::endl;
        return ;    
    }
    printChar(convert);
    // printInt(convert);
    // printFloat(convert);
    // printDouble(convert);
}