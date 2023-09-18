/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:01:07 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/18 09:50:24 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class	Zombie {
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void	introduction() const;
	void	setName(std::string name);
	void	introductionIndex(int index) const;

private:
	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif