/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 12:16:50 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/30 12:16:50 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "WrongCat has been spotted." << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	*this = copy;
	std::cout << "WrongCat was cloned." << std::endl;
	return;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat copied another." << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat was ran over." << std::endl;
	return;
}

void WrongCat::makeSound() const
{
	std::cout << "REEEEEEEE.....Meow!" << std::endl;
	return;
}