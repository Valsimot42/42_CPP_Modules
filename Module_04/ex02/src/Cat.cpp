/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:41:25 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/29 10:41:25 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "Cat has been spotted" << std::endl;
	_brain = new Brain();
	return;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	_brain = new Brain();
	*this = copy;
	std::cout << "Cat was cloned." << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &copy)
{
	_type = copy._type;
	*_brain = *copy._brain;
	std::cout << "Cat was copied." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat was ran over." << std::endl;
	return;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
	return;
}

std::string	Cat::getIdea(int i) const{
	if (i < 0 || i > 99) {
		std::cout << "Invalid index." << std::endl;
		return (NULL);
	}
	return (_brain->getIdea(i));
}

void	Cat::setIdea(int i, std::string idea) {
	if (i < 0 || i > 99) {
		std::cout << "Brain malfunction." << std::endl;
		return ;
	}
	_brain->setIdea(i, idea);
	return ;
}