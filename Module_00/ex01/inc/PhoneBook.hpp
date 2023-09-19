/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 11:32:42 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/19 09:41:39 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iomanip>
#include "Contact.hpp"

#define PHONEBOOK_SIZE 8

class Phonebook{
public:
	Phonebook();
	~Phonebook();

	int 	AddContact();
	bool	IsContactListEmpty();
	void 	DisplayContactList();
	int 	DisplaySingleContact(std::string index);

private:

	int 	_index;
	int 	_highestIndex;
	Contact	_contacts[8];

	void 	_displayHeader() const;
	void 	_adjustField(std::string field) const;
	void 	_displayContactInList(int index);
};

#endif