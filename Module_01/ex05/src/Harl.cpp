/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:29:48 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/22 13:29:48 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl() {
	std::cout << "Harl has entered the room." << std::endl;
	return ;
}

Harl::~Harl() {
	std::cout << "Harl has left the room." << std::endl;
	return ;
}

void::Harl::complain(std::string level) {
	std::string	commentLevels[4] =
	{
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void (Harl::*functions[4])() =
	{
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error
	};
	for (int i = 0; i < 4 ; i++) {
		if (commentLevels[i] == level) {
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "This is unexpected behavior from Harl." << std::endl;
	return ;
}

void Harl::_debug() {
	std::cout << "[DEBUG]\nI love to get extra bacon for my 7XL-double-cheese-triple-pic"
		"kle-special-ketchup burger. I just love it!" << std::endl;
}

void Harl::_info() {
	std::cout << "[INFO]\nI cannot believe adding extra bacon cost more money. You don'"
		"t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::_warning() {
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I have bee"
		"n coming here for years and you just started working here last month."
		<< std::endl;
}

void Harl::_error() {
	std::cout << "[ERROR]\nThis is unacceptable, I want to speak to the manager now."
		<< std::endl;
}