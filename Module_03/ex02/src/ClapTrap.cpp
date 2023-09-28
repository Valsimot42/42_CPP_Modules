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
	if (_name == "Fratley")
		std::cout <<  _name << " raises his spear!" << std::endl;
	else if (_name == "Freya")
		std::cout << _name << " raised her spear!" << std::endl;
	else
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
	if (_name == "Fratley" || _name == "Freya") {
		if (_hitPoints == 0)
			std::cout << _name << " has fallen!" << std::endl;
		else
			std::cout <<  _name << " retreated!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " has left the battle!" << std::endl;
	return ;
}

bool	ClapTrap::_checkAction() {
	if (_energyPoints <= 0)
	{
		if (_name == "Freya" || _name == "Fratley")
			std::cout << _name << " is exhausted!" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return (false);
	}
	if (_hitPoints <= 0)
	{
		if (_name == "Fratley" || _name == "Freya")
			std::cout << _name << " has been knocked out!" << std::endl;
		else
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
	if (_name == "Fratley") {
		if (_attackDamage == 0)
			std::cout << _name << " missed!" << std::endl;
		else
			std::cout << _name << " damaged " << target << " for " << _attackDamage << "damage." << std::endl;
	}
	else if (_name == "Freya") {
		if (_attackDamage == 0)
			std::cout << _name << " missed!" << std::endl;
		else
			std::cout << _name << " slashed " << target << " for " << _attackDamage << " damage." << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " clapped " << target << " for " << _attackDamage << " damage." << std::endl;
	return ;
}

void	ClapTrap::attackTarget(ClapTrap &target) {
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	if (_name == "Fratley") {
		if (_attackDamage == 0)
			std::cout << _name << " missed!" << std::endl;
		else
			std::cout << _name << " damaged " << target._name << std::endl;
	}
	else if (_name == "Freya") {
		if (_attackDamage == 0)
			std::cout << _name << " missed!" << std::endl;
		else
			std::cout << _name << " slashed " << target._name << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " clapped "  << target._name << std::endl;
	target.takeDamage(_attackDamage);
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= 0)
	{
		if (_name == "Freya" || _name == "Fratley")
			std::cout << _name << " is already KO." << std::endl;
		else
			std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		return ;
	}
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	if (_name == "Freya" || _name == "Fratley") {
		std::cout << _name << " took " << amount << " points of damage!" << std::endl;
		if (_hitPoints <= 0)
			std::cout << _name << " has been knocked out!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage!" << std::endl;
		if (_hitPoints <= 0)
			std::cout << "ClapTrap " << _name << " is KO!" << std::endl;
	}
	return ;
}

void	ClapTrap::criticalDamage(unsigned int amount) {
	if (_hitPoints <= 0)
	{
		if (_name == "Freya" || _name == "Fratley")
			std::cout << _name << " is already KO." << std::endl;
		else
			std::cout << "ClapTrap " << _name << " is dead." << std::endl;
		return ;
	}
	unsigned int result = amount * 2;
	_hitPoints -= result;
	if (_hitPoints < 0)
		_hitPoints = 0;
	if (_name == "Freya" || _name == "Fratley")
		std::cout << _name << " took critical damage! " << _name << " took " << result << " points of damage!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " took " << result << " points of damage!" << std::endl;
	if (_hitPoints <= 0) {
		if (_name == "Freya" || _name == "Fratley")
			return ;
		else
			std::cout << "ClapTrap " << _name << " is KO!" << std::endl;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!_checkAction())
		return ;
	_energyPoints -= 1;
	_hitPoints += amount;
	if (_hitPoints > 10)
		_hitPoints = 10;
	if (_name == "Fratley")
		std::cout << _name << " used elixir! " << amount << " hit points were recovered!" << std::endl;
	else if (_name == "Freya")
		std::cout << _name << " used potion! " << amount << " hit points were recovered!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " recovered " << amount << " hit points!" << std::endl;
	return ;
}

std::string	ClapTrap::getName() const {
	return (_name);
}