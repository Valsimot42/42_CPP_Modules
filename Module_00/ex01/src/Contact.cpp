/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:00:53 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/19 09:30:45 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact() {
	return ;
}

Contact::~Contact() {
	return ;
}

int Contact::setContactIndex(int index) {
	this-> _contactIndex = index;
	return (0);
}

int Contact::setFirstName() {
	std::string input;

	while(1){
		std::cout << "Enter contact's First Name:" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0 || std::cin.eof())
			return (-1);
		else if (input.empty())
			std::cout << "No empty fields allowed!" << std::endl;
		else
			break;
	}
	this->_firstName = input;
	return (0);
}

int Contact::setLastName() {
	std::string input;

	while(1){
		std::cout << "Enter contact's Last Name:" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0 || std::cin.eof())
			return (-1);
		else if (input.empty())
			std::cout << "No empty fields allowed!" << std::endl;
		else
			break;
	}
	this->_lastName = input;
	return (0);
}

int Contact::setNickname() {
	std::string	input;

	while(1){
		std::cout << "Enter contact's Nickname:" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0 || std::cin.eof())
			return (-1);
		else if (input.empty())
			std::cout << "No empty fields allowed!" << std::endl;
		else
			break;
	}
	this->_nickname = input;
	return (0);
}

int Contact::setPhoneNumber() {
	std::string	input;

	while(1){
		std::cout << "Enter contact's Phone Number:" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0 || std::cin.eof())
			return (-1);
		else if (input.empty())
			std::cout << "No empty fields allowed!" << std::endl;
		else {
			try {
				if(std::stoi(input) < 0) {
					std::cout << "Number is out of bounds!" << std::endl;
					continue;
				}
			}
			catch (std::out_of_range){
				std::cout << "Number is out of bounds!" << std::endl;
				continue;
			}
			catch (std::invalid_argument) {
				std::cout << "Input is not a number!" << std::endl;
				continue;
			}
			break;
		}
	}
	this->_phoneNumber = input;
	return (0);
}

int Contact::setDarkestSecret() {
	std::string	input;

	while(1){
		std::cout << "Enter contact's Dark Secret:" << std::endl;
		std::getline(std::cin, input);
		if (input.compare("EXIT") == 0 || std::cin.eof())
			return (-1);
		else if (input.empty())
			std::cout << "No empty fields allowed!" << std::endl;
		else
			break;
	}
	this->_darkestSecret = input;
	return (0);
}

std::string Contact::getContactIndex() const {
	return(std::to_string(this->_contactIndex));
}

std::string Contact::getFirstName() const {
	return(this->_firstName);
}

std::string Contact::getLastName() const {
	return(this->_lastName);
}

std::string Contact::getNickname() const {
	return(this->_nickname);
}

std::string Contact::getPhoneNumber() const {
	return(this->_phoneNumber);
}

std::string Contact::getDarkestSecret() const {
	return(this->_darkestSecret);
}