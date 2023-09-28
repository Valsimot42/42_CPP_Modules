/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 12:33:02 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/28 12:33:02 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

int main() {
	FragTrap fragTrap("FragTrap");
	FragTrap fragTrap2("FragTrap2");

	fragTrap.attack("FragTrap2");
	fragTrap2.takeDamage(5);
	fragTrap2.beRepaired(4);

	fragTrap.takeDamage(5);
	fragTrap.beRepaired(4);

	fragTrap.criticalDamage(5);

	fragTrap.attack(("FragTrap2"));
	fragTrap.beRepaired(10);

	fragTrap.highFivesGuys();
	return (0);
}