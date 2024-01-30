/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:00:28 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/30 13:26:38 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"

int	main()
{
	Base *newGeneratedClass;

	newGeneratedClass = generate();
	identify(newGeneratedClass);
	identify(*newGeneratedClass);
	delete newGeneratedClass;

	newGeneratedClass = generate();
	identify(&(*newGeneratedClass));
	identify(*newGeneratedClass);
	delete newGeneratedClass;
}