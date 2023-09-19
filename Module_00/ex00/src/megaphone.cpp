/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 11:52:40 by tbolkova          #+#    #+#             */
/*   Updated: 2023/08/30 10:36:54 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

	else
	{
		int i = 1;
		while(av[i])
		{
			int j = 0;
			while(av[i][j])
			{
				std::cout << (char)toupper(av[i][j]);
				j++;
			}
			std::cout << " ";
			i++;
		}
	}
	std::cout << std::endl;
}