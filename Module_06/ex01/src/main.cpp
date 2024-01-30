/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:04:16 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/30 15:26:42 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

int	main()
{
	Data *serialized = new Data;
	
	serialized->name = "Freya";
	serialized->age = 21;
	
	uintptr_t i = Serializer::serialize(serialized);

	
	std::cout << GREEN << "Convertion value of pointer to integer 'i': " << BOLDGREEN << i << RESET << std::endl;
	Data *deserialized = Serializer::deserialize(i);
	
	std::cout << BLUE << "Name: " << BOLDBLUE << deserialized->name << RESET << std::endl;
	std::cout << BLUE << "Age: " << BOLDBLUE <<  deserialized->age << RESET << std::endl;
	
	delete serialized;
}