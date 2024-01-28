/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:26:26 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/28 20:05:03 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"
#include "../inc/Colors.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << RED << "Wrong number of args, has to be 1\n";
		return 1;
	}
	ScalarConverter::convertTypes(argv[1]);
}
