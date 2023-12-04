/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 10:32:37 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/29 10:32:37 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

int main(void)
{
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "// BASE TESTS //" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "// DEEP COPIES //" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		Dog dog;
		Dog Max(dog);
		Dog tmp = dog;

		dog.setIdea(0, "Sit!");
		Max.setIdea(0, "Stay!");
		tmp.setIdea(0, "Roll!");
		std::cout << dog.getIdea(0) << std::endl;
		std::cout << Max.getIdea(0) << std::endl;
		std::cout << tmp.getIdea(0) << std::endl;
	}
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "// ANIMAL ARRAY //" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		int size = 10;
		Animal  *pets[size];

		for (int i = 0; i < size/2; i++)
			pets[i] = new Dog();
		for (int i = size/2; i < size; i++)
			pets[i] = new Cat();
		std::cout << pets[0]->getType() << std::endl;
		std::cout << pets[size - 1]->getType() << std::endl;
		for (int i = 0; i < size; i++)
			delete pets[i];
	}
	std::cout << std::string(50, '-') << std::endl;
	return (0);
}
