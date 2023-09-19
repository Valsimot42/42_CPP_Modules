/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:43:02 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/18 12:04:14 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class	Zombie {
public:
	Zombie(std::string name);
	~Zombie();

	void	introduction() const;

private:
	std::string const	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif