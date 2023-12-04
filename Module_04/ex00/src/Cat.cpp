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
	std::cout << "Cat has been spotted." << std::endl;
	return;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Cat was cloned." << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &copy)
{
	_type = copy._type;
	std::cout << "Cat was copied." << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat was ran over." << std::endl;
	return;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
	return;
}
