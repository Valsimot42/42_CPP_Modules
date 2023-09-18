/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 12:08:02 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/18 13:04:23 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(){
	Zombie	*horde;

	horde = newZombie("Bob");
	horde->introduction();
	randomChump("Gary");
	delete horde;
	return (0);
}