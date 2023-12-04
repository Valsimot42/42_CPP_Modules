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
	std::cout << "Dog default constructor called" << std::endl;
	_brain = new Brain();
	return;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	_brain = new Brain();
	*this = copy;
	std::cout << "Dog was cloned." << std::endl;
	return;
}

Dog &Dog::operator=(const Dog &copy)
{
	_type = copy._type;
	*_brain = *copy._brain;
	std::cout << "Dog was copied." << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "What da dog doin'?." << std::endl;
	return;
}

void Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
	return;
}

std::string Dog::getIdea(int i) const {
	if (i < 0 || i > 99) {
		std::cout << "Invalid index." << std::endl;
		return (NULL);
	}
	return (_brain->getIdea(i));
}

void	Dog::setIdea(int i, std::string idea) {
	if (i < 0 || i > 99) {
		std::cout << "Brain malfunction." << std::endl;
		return ;
	}
	_brain->setIdea(i, idea);
	return ;
}