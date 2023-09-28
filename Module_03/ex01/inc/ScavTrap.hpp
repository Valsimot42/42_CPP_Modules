/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:47:14 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/27 13:47:14 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap &operator = (ScavTrap const &copy);
	ScavTrap(ScavTrap const &copy);

	~ScavTrap();

	void	attack(const std::string& target);
	void	attackTarget(ScavTrap &target);
	void	attackTarget(ClapTrap &target);
	void	criticalDamage(unsigned int amount);
	void	guardGate(void);

};

#endif