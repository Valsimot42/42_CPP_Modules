/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:32:35 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/19 09:42:03 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/PhoneBook.hpp"

Phonebook::Phonebook() : _index(0), _highestIndex(0) {
	return ;
}

Phonebook::~Phonebook() {
	return ;
}

int Phonebook::AddContact() {
	Contact *currentContact;

	if (this->_index > (PHONEBOOK_SIZE - 1))
		this->_index = 0;
	currentContact = &this->_contacts[this->_index];
	currentContact->setContactIndex(this->_index);
	if (currentContact->setFirstName() != 0)
		return (-1);
	if (currentContact->setLastName() != 0)
		return (-1);
	if (currentContact->setNickname() != 0)
		return (-1);
	if (currentContact->setPhoneNumber() != 0)
		return (-1);
	if (currentContact->setDarkestSecret() != 0)
		return (-1);
	this->_index++;
	if (this->_index > this->_highestIndex)
		this->_highestIndex = this->_index;
	return (0);
}

void Phonebook::_displayHeader() const {
	std::cout << "|------------------------------------------------------|" << std::endl;
	std::cout << "|   Index  |First Name|Last Name | Nickname |  Number  |" << std::endl;
	std::cout << "|------------------------------------------------------|" << std::endl;
	return ;
}

void Phonebook::_adjustField(std::string field) const {
	std::cout << "|";
	if (field.length() >= 10)
		std::cout << field.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << field;
	return ;
}

void Phonebook::_displayContactInList(int index) {
	_adjustField(this->_contacts[index].getContactIndex());
	_adjustField(this->_contacts[index].getFirstName());
	_adjustField(this->_contacts[index].getLastName());
	_adjustField(this->_contacts[index].getNickname());
	_adjustField(this->_contacts[index].getPhoneNumber());
	std::cout << "|" << std::endl;
	return ;
}

bool Phonebook::IsContactListEmpty() {
	return(this->_contacts[0].getFirstName().empty());
}

void Phonebook::DisplayContactList() {
	_displayHeader();
	int i = 0;
	while (i < this->_highestIndex){
		_displayContactInList(i);
		std::cout << "|------------------------------------------------------|" << std::endl;
		i++;
	}
	return ;
}

int	Phonebook::DisplaySingleContact(std::string index) {
	int indexInt;

	try {
		indexInt = std::stoi(index);
	}
	catch (std::invalid_argument) {
		std::cout << "Input is not a number!" << std::endl;
		return (-1);
	}
	if (indexInt < 0 || indexInt > (PHONEBOOK_SIZE -1)) {
		std::cout << "Index is out of bounds!" << std::endl;
		return (-1);
	}
	if (this->_contacts[indexInt].getFirstName().empty()) {
		std::cout << "No contact in that index!" << std::endl;
		return (-1);
	}
	std::cout << this->_contacts[indexInt].getFirstName() << std::endl;
	std::cout << this->_contacts[indexInt].getLastName() << std::endl;
	std::cout << this->_contacts[indexInt].getNickname() << std::endl;
	std::cout << this->_contacts[indexInt].getPhoneNumber() << std::endl;
	std::cout << this->_contacts[indexInt].getDarkestSecret() << std::endl;
	return (0);
}