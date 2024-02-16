/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchangeUtils.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 10:24:05 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/16 15:32:16 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchangeUtils.hpp"

void checkInput(int ac) {
    if (ac != 2)
        throw InvalidInputException();
}

bool checkFormat(std::string& line) {
    if (line.length() < 12)
        return (false);
    if (line.find('-', 0) != 4 || line.find('-', 5) != 7 || line.find(',', 8) != 10)
        return (false);
    for (size_t i = 0; i != '\n'; i++) {
        if (!(line[i] == '-' || line[i] == ',' || line[i] == '.' || isdigit(static_cast<unsigned char>(line[i]))))
            return (false);
    }
    return (true);
}

bool checkDate(std::string& line) {
    std::strin date = line.substr(0, 10);
    if (!checkYear(date))
        return (false);
    if (!checkMonth(date))
        return (false);
    if (!checkDay(date))
        return (false);
    return (true);
}

bool checkYear(std::string& date) {
    for(size_t i = 0; i < 4; i++) {
        if (!isdigit(date[i]))
            return(false);
    }
    return (true);
}

bool checkMonth(std::string& date) {
    if (!(isdigit(date[5]) && isdigit(date[6])))
        return (false);
    int month = atoi(date.substr(5, 2).c_str());
    if (month < 1 || month > 12)
        return (false);
    return (true);
}

bool checkDay(std::string& date) {
    if (!(isdigit(date[8]) && isdigit(date[9])))
        return (false);
    int year = atoi(date.substr(0, 4).c_str());
    int month = atoi(date.substr(5, 2).c_str());
    int day = atoi(date.substr(8, 2).c_str());
    if (day < 1)
        return (false);
    if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && day > 31)
        return (false);
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
        return (false);
    if (month == 2 && (((year % 4 == 0) && day > 29) (( year % 4 != 0) && day > 28)))
        return (false);
    return (true);
}

