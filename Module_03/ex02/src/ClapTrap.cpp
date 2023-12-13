/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:33:14 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/28 12:33:14 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() :
		_name("Newborn"),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0)
{
	std::cout << "A newborn ClapTrap has joined the battle!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) :
		_name(name),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has joined the battle!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &copy){
	*this = copy;
	std::cout << "ClapTrap copied." << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &copy) {
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;

	std::cout << "ClapTrap successfully used mimic!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " has left the battle!" << std::endl;
	return ;
}

bool	ClapTrap::_checkAction() {
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return (false);
	}
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is KO." << std::endl;
		return (false);
	}
	return (true);
}

void	ClapTrap::attack(const std::string &target)
{
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << " for " << _attackDamage << " damage." << std::endl;
	return ;
}

void	ClapTrap::attackTarget(ClapTrap &target) {
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " clapped "  << target._name << std::endl;
	target.takeDamage(_attackDamage);
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		return ;
	}
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is KO!" << std::endl;
	return ;
}

void	ClapTrap::criticalDamage(unsigned int amount) {
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		return ;
	}
	unsigned int result = amount * 2;
	_hitPoints -= result;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " took " << result << " points of damage!" << std::endl;
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " is KO!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	_hitPoints += amount;
	if (_hitPoints > 10)
		_hitPoints = 10;
	std::cout << "ClapTrap " << _name << " recovered " << amount << " hit points!" << std::endl;
	return ;
}

std::string	ClapTrap::getName() const {
	return (_name);
}