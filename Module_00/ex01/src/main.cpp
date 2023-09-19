/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:20:55 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/19 09:42:13 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Contact.hpp"
#include "../inc/PhoneBook.hpp"

int main(void)
{
	Phonebook	phonebook;
	std::string	command;
	std::string index;

	while(1) {
		std::cout << "Enter a command: <ADD> <SEARCH> <EXIT>" << std::endl;
		std::getline(std::cin, command);
		if (command.compare("EXIT") == 0 || std::cin.eof())
			return (0);
		else if (command.compare("ADD") == 0){
			if (phonebook.AddContact() != 0)
				return (0);
		}
		else if (command.compare("SEARCH") == 0) {
			phonebook.DisplayContactList();
			if (phonebook.IsContactListEmpty())
				continue ;
			while (1) {
				std::cout << "Enter index of contact to expand or press ENTER to return:" << std::endl;
				std::getline(std::cin, index);
				if (index.compare("EXIT") == 0 || std::cin.eof())
					return (0);
				if (index.empty() || phonebook.DisplaySingleContact(index) == 0)
					break ;
			}
		}
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}