/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:41:18 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/29 10:41:18 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal has been spotted." << std::endl;
	return;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal who?" << std::endl;
	return;
}

Animal &Animal::operator=(const Animal &copy)
{
	_type = copy._type;
	std::cout << " Animal copied another." << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal vanished." << std::endl;
	return;
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "Default animal sound." << std::endl;
	return;
}
