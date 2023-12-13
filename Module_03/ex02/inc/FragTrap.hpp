/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:32:18 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/28 12:32:18 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTAP_H
# define FRAGTAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap :  public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap &operator = (FragTrap const &copy);
	FragTrap(FragTrap const &copy);

	~FragTrap();

	void	attack(const std::string& target);
	void	attackTarget(FragTrap &target);
	void	attackTarget(ClapTrap &target);
	void	highFivesGuys();
};

#endif