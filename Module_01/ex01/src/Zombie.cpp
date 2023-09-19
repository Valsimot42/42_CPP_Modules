/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:00:52 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/18 09:44:49 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << this->_name << " has risen from death!" << std::endl;
	return ;
}

Zombie::Zombie() {
	std::cout << "A zombie has risen from death!" << std::endl;
	return ;
}

Zombie::~Zombie() {
	if (this->_name.empty())
		std::cout << "A zombie has been laid back to rest!" << std::endl;
	else
		std::cout << this->_name << " has been laid back to rest!" << std::endl;
	return ;
}

void Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}

void Zombie::introduction() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::introductionIndex(int index) const {
	std::cout << this->_name << " #" << index << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}