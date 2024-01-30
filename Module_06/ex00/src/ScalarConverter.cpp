/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:26:58 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/30 13:50:06 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"
#include "../inc/Colors.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(ScalarConverter const &copy) {
    *this = copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &copy) {
    if (this != &copy) {
        *this = copy;
    }
    return (*this);
}

ScalarConverter::~ScalarConverter() {}

bool ScalarConverter::isChar(const std::string &argument) {
    if (argument[0] < '0' || argument[0] > '9') {
        return (isValidChar(argument));
    }
    return (false);
}

bool ScalarConverter::isInt(const std::string &argument) {
    std::istringstream iss(argument);
    int result;
    iss >> result;
    if (iss.fail() || !iss.eof()) {
        return (false);
    }
    return (true);
}

bool ScalarConverter::isValidDigit(const std::string &argument) {
    int length = argument.length();
    if (length == 0)
        return (false);
    if (length == 1 && (argument[0] == '-' || argument[0] == '+'))
        return (false);
    if (length > 1 && (argument[0] == '-') && argument[1] == '0' && !argument[2])
        return (false);
    if (length > 1 && (argument[0] == '+') && argument[1] == '0')
        return (false);
    if (length > 1 && (argument[0] == '0' || argument[0] == '.') && argument[1] == 'f')
        return (false);

    int decimalPoint = 0;
    for (int i = 0; i < length; ++i) {
        if (!isdigit(argument[i])) {
            if (i == 0 && (argument[i] == '-' || argument[i] == '+'))
                continue;
            if (argument[i] == '.' && decimalPoint == 0) {
                decimalPoint = 1;
                if (i + 1 == length || !isdigit(argument[i + 1]))
                    return false;

                continue;
            }
            if (i == length - 1 && argument[i] == 'f' && decimalPoint == 1)
                continue;
            else
                return (false);
        }
    }
    return (true);
}


bool ScalarConverter::isValidChar(const std::string &argument) {
    if (argument.length() == 1) {
        char c = argument[0];
        return (isprint(c) && c != '0');
    }
    return false;
}

bool ScalarConverter::isValidInput(const std::string &argument) {
    if (isValidChar(argument) || isValidDigit(argument))
        return (true);
    if (argument == "nan" || argument == "nanf" || argument == "-inf" || argument == "inf" || argument == "-inff" || argument == "inff")
        return (true);
    return (false);
}

int ScalarConverter::convertToInt(const std::string &argument) {
    char *ptr;
    int result = strtol(argument.c_str(), &ptr, 10);
    return result;
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
    std::istringstream iss(argument);
    iss >> result;
    if (!iss.fail() && iss.eof()) {
        return result + 0.0;
    }
    return result;
}

double ScalarConverter::convertToDouble(const std::string &argument) {
    char *ptr;
    double result = strtod(argument.c_str(), &ptr);
    return result;
}


void ScalarConverter::printChar(const std::string convert) {
    if (isChar(convert)) {
        std::cout << CYAN << "char: '" << convert << "'" << RESET << std::endl;
    }
    else if (convertToFloat(convert) > 32 && convertToFloat(convert) < 127) {
        std::cout << CYAN << "char: '" << static_cast<char>(convertToFloat(convert)) << "'" << RESET << std::endl;
    }
    else if (convertToInt(convert) >= 0 && convertToFloat(convert) <= 32){
        std::cout << CYAN << "char: non displayable" << RESET << std::endl;
    }
    else
        std::cout << CYAN << "char: impossible" << RESET << std::endl;
}

void ScalarConverter::printInt(const std::string convert) {
    if (convert == "nan" || convert == "nanf" || convert == "-inf" || convert == "inf" || convert == "-inff" || convert == "inff") {
        std::cout << MAGENTA << "int: impossible" << RESET << std::endl;
    }
    else if (isChar(convert)) {
        std::cout << MAGENTA << "int: " << static_cast<int>(convert[0]) << RESET << std::endl;
    }
    else if (isInt(convert)) {
        if (convert[0] == '+' ) {
            std::cout << MAGENTA << "int: " << convert.substr(1) << RESET << std::endl;
        } else {
            std::cout << MAGENTA << "int: " << convert << RESET << std::endl;
        }
    }
    else if (convertToDouble(convert) >= INT_MIN && convertToDouble(convert) <= INT_MAX) {
        std::cout << MAGENTA << "int: " << static_cast<int>(convertToDouble(convert)) << RESET << std::endl;
    }
    else {
        std::cout << MAGENTA << "int: impossible" << RESET << std::endl;
    }
}


void ScalarConverter::printFloat(const std::string convert) {
    bool decimal = false;
    unsigned long i;
    for (i = 0; i < convert.length(); ++i) {
        if (convert[i] == '.') {
            decimal = true;
            break;
        }
    }
    i++;
    if (convert == "nan" || convert == "nanf") {
        std::cout << YELLOW << "float: nanf" << RESET << std::endl;
    }
    else if (convert == "-inf" || convert == "-inff") {
        std::cout << YELLOW << "float: -inff" << RESET << std::endl;
    }
    else if (convert == "inf" || convert == "inff") {
        std::cout << YELLOW << "float: inff" << RESET << std::endl;
    }
    else if (isChar(convert)) {
        std::cout << YELLOW << "float: " << static_cast<float>(convert[0]) << ".0f" << RESET << std::endl;
    }
    else if (isInt(convert)) {
        std::cout << YELLOW << "float: " << static_cast<float>(convertToFloat(convert)) << ".0f" << RESET << std::endl;
    }
    else {
        if ((convert[i] == '0' && convert[i + 1] == '\0') || (convert[i] == '0' && convert[i + 1] == 'f')) {
            float floatValue = static_cast<float>(convertToFloat(convert));
        if (floatValue != HUGE_VALF && floatValue != -HUGE_VALF) {
            std::cout << YELLOW << "float: " << floatValue << ".0f" << RESET << std::endl;
        } else {
            std::cout << YELLOW << "float: inff" << RESET << std::endl;
        }
    }
        else
            std::cout << YELLOW << "float: " << static_cast<float>(convertToFloat(convert)) << "f" << RESET << std::endl;
    }
}

void ScalarConverter::printDouble(const std::string convert) {
    bool decimal = false;
    unsigned long i;
    for (i = 0; i < convert.length(); ++i) {
        if (convert[i] == '.') {
            decimal = true;
            break;
        }
    }
    i++;
    if (convert == "nan" || convert == "nanf")
        std::cout << BLUE << "double: nan" << RESET << std::endl;
    else if (convert == "-inf" || convert == "-inff") {
        std::cout << BLUE << "double: -inf" << RESET << std::endl;
    }
    else if (convert == "inf" || convert == "inff") {
        std::cout << BLUE << "double: inf" << RESET << std::endl;
    }
    else if (isChar(convert)) {
        std::cout << BLUE << "double: " << static_cast<double>(convert[0]) << ".0" << RESET << std::endl;
    }
    else if (isInt(convert)) {
        std::cout << BLUE << "double: " << static_cast<double>(convertToInt(convert)) << ".0" << RESET << std::endl;
    }
    else {
        if (convertToFloat(convert) != HUGE_VALF && convertToFloat(convert) != -HUGE_VALF)
            if ((convert[i] == '0' && convert[i + 1] == '\0') || (convert[i] == '0' && convert[i + 1] == 'f'))
                std::cout << BLUE << "double: " << static_cast<double>(convertToFloat(convert)) << ".0" << RESET <<  std::endl;
            else
                std::cout << BLUE << "double: " << static_cast<double>(convertToFloat(convert)) << RESET << std::endl;
        else {
            std::cout << BLUE << "double: " << convertToDouble(convert) << RESET <<  std::endl;
        }
    }
}

void ScalarConverter::convertTypes(const std::string convert) {
    if (!isValidInput(convert)) {
        std::cout << BOLDRED << "char: impossible"<< std::endl;
        std::cout << BOLDRED << "int: impossible" << RESET << std::endl;
        std::cout << BOLDRED << "float: nanf" << RESET << std::endl;
        std::cout << BOLDRED << "double: nan" << RESET << std::endl;
        return ;    
    }
    printChar(convert);
    printInt(convert);
    printFloat(convert);
    printDouble(convert);
}