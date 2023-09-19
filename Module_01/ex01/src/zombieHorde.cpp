/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:00:57 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/18 09:41:50 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
	Zombie *horde;

	horde = new Zombie[N];
	for(int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}