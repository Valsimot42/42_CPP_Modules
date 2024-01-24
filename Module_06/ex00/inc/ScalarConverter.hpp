/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:19:56 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/24 12:44:04 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <stdlib.h>

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