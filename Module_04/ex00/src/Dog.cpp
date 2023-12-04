/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:41:22 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/29 10:41:22 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "Dog has been spotted." << std::endl;
	return;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Dog was cloned." << std::endl;
	return;
}

Dog &Dog::operator=(const Dog &copy)
{
	_type = copy._type;
	std::cout << "Dog was copied." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "What da dog doin'?." << std::endl;
	return;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
	return;
}
