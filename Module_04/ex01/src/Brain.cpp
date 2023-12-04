/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:13:41 by tbolkova          #+#    #+#             */
/*   Updated: 2023/10/21 17:13:41 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain was generated." << std::endl;
	return;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
	std::cout << "Brain was cloned." << std::endl;
	return;
}

Brain &Brain::operator=(const Brain &copy) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = copy._ideas[i];
	std::cout << "Weird Frankenstein shit is happening." << std::endl;
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain has been discarded." << std::endl;
	return;
}

std::string Brain::getIdea(int i) const {
	if (i < 0 || i > 99) {
		std::cout << "No idea generated." << std::endl;
		return (NULL);
	}
	return (_ideas[i]);
}

void Brain::setIdea(int i, std::string idea) {
	if (i < 0 || i > 99) {
		std::cout << "No space for ideas." << std::endl;
		return ;
	}
	_ideas[i] = idea;
	return ;
}