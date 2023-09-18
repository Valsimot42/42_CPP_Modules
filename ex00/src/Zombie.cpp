/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 13:12:15 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/13 10:58:00 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
	std::cout << this->_name << " has risen from death!" << std::endl;
	return ;
}

Zombie::~Zombie() {
	std::cout << this->_name << " has been laid back to rest!" << std::endl;
	return ;
}

void Zombie::introduction() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}