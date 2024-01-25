/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:19:56 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/25 17:21:31 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <cctype>
#include <cstring>
#include <cmath>
#include <stdexcept>

#define MIN_INT -2147483648
#define MAX_INT  2147483647

#define POSITIVE_FLOAT_INFINITY (1.0f/0.0f)
#define NEGATIVE_FLOAT_INFINITY (-1.0f/0.0f)

#define MY_NAN (0.0 / 0.0) // Define NaN as a division by zero result (platform-dependent)
#define MY_NANF (0.0f / 0.0f) // Define NaN as a division by zero result (platform-dependent)


class ScalarConverter {
private:
    ScalarConverter();

    static void printChar(std::string convert);
    static void printInt(std::string convert);
    static void printFloat(std::string convert);
    static void printDouble(std::string convert);
    
    static double convertToDouble(const std::string &argument);
    static float convertToFloat(const std::string &argument);
    static int convertToInt(const std::string &argument);

    static bool isValidInput(const std::string &argument);

    static bool isChar(const std::string &argument);
    static bool isValidChar(const std::string &argument);
    static bool isInt(const std::string &argument);
    static bool isValidDigit(const std::string &argument);
    

public:
    ScalarConverter(ScalarConverter const &copy);
    ScalarConverter &operator=(ScalarConverter const &copy);
    ~ScalarConverter();

    static void convertTypes(std::string convert);
    
};

#endif