/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:33:11 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/28 12:33:11 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	_name = "Newborn_2";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "A newborn ScavTrap has joined the battle!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " has joined the battle!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &copy) : ClapTrap(copy) {
	*this = copy;
	std::cout << "ScavTrap copied." << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy) {
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;

	std::cout << "ScavTrap successfully used mimic!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " has left the battle!" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target << " for " << _attackDamage << " damage." << std::endl;
	return ;
}

void	ScavTrap::attackTarget(ScavTrap &target) {
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target._name << ", causing " << _attackDamage << " points of damage!" << std::endl;
	target.takeDamage(_attackDamage);
	return ;
}

void	ScavTrap::attackTarget(ClapTrap &target) {
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target.getName() << ", causing " << _attackDamage << " points of damage!" << std::endl;
	target.takeDamage(_attackDamage);
	return ;
}


void	ScavTrap::guardGate() {
	if (!_checkAction())
		return ;
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode." << std::endl;
	return ;
}