/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:47:30 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/27 13:47:30 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int	main(void)
{
	{
		std::cout << std::string(50, '-') << std::endl;
		std::cout << "-- Battle music starts... --" << std::endl;
		ScavTrap NovaDragon("Nova Dragon");

		NovaDragon.guardGate();
		NovaDragon.attack("Freya");
		NovaDragon.takeDamage(5);
		NovaDragon.beRepaired(4);

		std::cout << "Freya grew tired of Nova Dragon's bullshit and used 'Jump'!" << std::endl;
		NovaDragon.takeDamage(120);


		NovaDragon.attack("Fratley");
		NovaDragon.beRepaired(10);
		std::cout << "Nova Dragon fled the battle!" << std::endl;
	}
	{
		std::cout << std::string(50, '-') << std::endl;
		std::cout << "-- Follow in pursuit? --" << std::endl;
		std::cout << std::string(50, '-') << std::endl;

		std::cout << "-- Battle music starts... --" << std::endl;
		ScavTrap NovaDragon("Nova Dragon");
		ClapTrap Fratley("Fratley");
		ClapTrap Freya("Freya");

		NovaDragon.attackTarget(Freya);
		NovaDragon.attackTarget(Fratley);
		NovaDragon.attackTarget(Fratley);

		std::cout << "Nova Dragon lost its balance and smashed against the rocks!" << std::endl;
		NovaDragon.takeDamage(99);
		NovaDragon.beRepaired(18);
	}
	std::cout << "Game over..." << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	return (0);
}