/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:15:48 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/19 11:15:48 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {
	std::cout << this->_name << " jumps in to help!" << std::endl;
	return ;
}

HumanA::~HumanA() {
	std::cout << this->_name << " flees in terror!" << std::endl;
	return ;
}

void	HumanA::attack() const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
	return ;
}

void	HumanA::setWeapon(Weapon &weapon) {
	this->_weapon = weapon;
	return ;
}