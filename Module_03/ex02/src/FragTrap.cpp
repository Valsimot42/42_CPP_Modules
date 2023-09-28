/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:33:05 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/28 12:33:05 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_name = "Newborn_1";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "A newborn FragTrap has joined the battle!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has joined the battle!" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &copy) : ClapTrap(copy) {
	*this = copy;
	std::cout << "FragTrap copied." << std::endl;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const &copy) {
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;

	std::cout << "FragTrap successfully used mimic!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " has left the battle!" << std::endl;
}

void	FragTrap::attack(const std::string &target) {
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::attackTarget(FragTrap &target) {
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	target.takeDamage(_attackDamage);
}

void	FragTrap::attackTarget(ClapTrap &target) {
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	std::cout << "FragTrap " << _name << " attacks " << target.getName() << ", causing " << _attackDamage << " points of damage!" << std::endl;
	target.takeDamage(_attackDamage);
	return ;
}

void	FragTrap::highFivesGuys() {
	if (!_checkAction())
		return ;
	std::cout << "FragTrap " << _name << " asks for a high five!" << std::endl;
}

