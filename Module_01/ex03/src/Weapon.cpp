/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:15:42 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/19 11:15:42 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {
	std::cout << "Weapon created: " << this->_type << std::endl;
	return ;
}
Weapon::~Weapon() {
	std::cout << "Weapon destroyed: " << this->_type << std::endl;
	return ;
}

void	Weapon::setType(std::string type) {
	this->_type = type;
	return ;
}

const std::string	&Weapon::getType() const {
	const std::string	&ref = this->_type;
	return (ref);
}