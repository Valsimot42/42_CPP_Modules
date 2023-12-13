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

int	main(void)
{
	{
		std::cout << std::string(50, '-') << std::endl;
		std::cout << "-- Battle music starts... --" << std::endl;
		FragTrap Kuja("Kuja");

		Kuja.highFivesGuys();
		Kuja.attack("Freya");
		Kuja.takeDamage(5);
		Kuja.beRepaired(4);

		Kuja.takeDamage(120);

		Kuja.attack("Freya");
		Kuja.beRepaired(10);
		std::cout << "Game over..." << std::endl;
	}
	{
		std::cout << std::string(50, '-') << std::endl;
		std::cout << "-- Try again? --" << std::endl;
		std::cout << std::string(50, '-') << std::endl;

		std::cout << "-- Battle music starts... --" << std::endl;
		FragTrap Kuja("Kuja");
		FragTrap Puck("Puck");
		ClapTrap Freya("Freya");
		ClapTrap Fratley("Fratley");

		Kuja.highFivesGuys();
		std::cout << "Dragoons are not amused, and ignore Kuja's request..." << std::endl;
		Kuja.attackTarget(Freya);
		Kuja.attackTarget(Fratley);
		Kuja.attackTarget(Puck);

		std::cout << "FragTrap Kuja implodes." << std::endl;
		Kuja.takeDamage(99);
		Kuja.beRepaired(18);
		Puck.attackTarget(Kuja);
	}
	std::cout << "-- Congratulations! You won! --" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	return (0);
}