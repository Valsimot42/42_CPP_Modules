/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:13:09 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/26 10:13:09 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap &operator = (ClapTrap const &copy);
	ClapTrap(ClapTrap const &copy);

	~ClapTrap();

	void	attack(const std::string& target);
	void	attackTarget(ClapTrap &target);
	void	takeDamage(unsigned int amount);
	void	criticalDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

private:
	std::string 	_name;
	int 			_hitPoints;
	int 			_energyPoints;
	int 			_attackDamage;

	bool			_checkAction();

};

#endif