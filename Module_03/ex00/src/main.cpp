/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:27:30 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/26 10:27:30 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int	main(void)
{
	{
		std::cout << std::string(50, '-') << std::endl;
		std::cout << "-- Battle music starts... --" << std::endl;
		ClapTrap Freya("Freya");

		Freya.attack("Green Dragon");
		Freya.takeDamage(5);
		Freya.beRepaired(4);

		Freya.takeDamage(5);
		Freya.beRepaired(4);

		Freya.criticalDamage(5);

		Freya.attack("Dragon");
		Freya.beRepaired(10);
	}
	{
		std::cout << std::string(50, '-') << std::endl;
		std::cout << "-- Try again? --" << std::endl;
		std::cout << std::string(50, '-') << std::endl;

		std::cout << "-- Battle music starts... --" << std::endl;
		ClapTrap Freya("Freya");
		ClapTrap Dragon("Green Dragon");

		Freya.attackTarget(Dragon);
		Freya.attackTarget(Dragon);
		Freya.attackTarget(Dragon);
		Freya.attackTarget(Dragon);
		Freya.attackTarget(Dragon);

		std::cout << "Green Dragon slammed its tail against Freya!" << std::endl;
		Freya.takeDamage(5);
		Freya.beRepaired(1);
		Freya.beRepaired(1);
		Freya.beRepaired(1);
		Freya.beRepaired(1);
		Freya.beRepaired(1);

		Freya.attackTarget(Dragon);
	}
	std::cout << std::string(50, '-') << std::endl;
	return (0);
}