/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:16:57 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/19 11:16:57 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string name);
	~HumanB();

	void	attack() const;
	void	setName(std::string name);
	void	setWeapon(Weapon &weapon);
private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif