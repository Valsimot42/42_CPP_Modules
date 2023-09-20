/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:15:31 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/19 11:15:31 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"
#include "../inc/HumanA.hpp"
#include "../inc/HumanB.hpp"

int	main(void) {
	{
		Weapon club = Weapon("mace");
		HumanA Biggs("Biggs", club);
		Biggs.attack();
		club.setType("morning star");
		Biggs.attack();

	}
	{
		Weapon club = Weapon("mace");
		HumanB Wedge("Wedge");
		Wedge.setWeapon(club);
		Wedge.attack();
		club.setType("morning star");
		Wedge.attack();
	}
	return (0);
}