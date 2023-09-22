/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:29:53 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/22 13:29:53 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>

class Harl {
public:
	Harl();
	~Harl();
	void	complain(std::string level);

private:
	void	_debug();
	void	_info();
	void 	_warning();
	void	_error();
};