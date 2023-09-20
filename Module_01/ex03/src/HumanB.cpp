/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:15:54 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/19 11:15:54 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name){
	std::cout << this->_name << " jumps in to help!" << std::endl;
	return ;
}

HumanB::~HumanB() {
	std::cout << this->_name << " flees in terror!" << std::endl;
	return ;
}

void	HumanB::attack() const {
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " attacks with his armored gloves!" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
	return ;
}