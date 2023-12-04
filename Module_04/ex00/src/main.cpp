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
#include "../inc/WrongCat.hpp"

int main(void)
{
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "// BASE TESTS //" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		const Animal* meta = new Animal();
		const Animal* i = new Cat();
		const Animal* j = new Dog();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();
		j->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "// WRONG SOUND //" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongCat* i = new WrongCat();
		std::cout << meta->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		meta->makeSound();
		i->makeSound();
		delete meta;
		delete i;
	}
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "// SOUND TESTS //" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		Animal animal;
		Dog dog;
		Cat cat;

		animal.makeSound();
		dog.makeSound();
		cat.makeSound();
	}
	std::cout << std::string(50, '-') << std::endl;
	std::cout << "// DESTRUCTION TESTS //" << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		Cat cat;

		std::cout << cat.getType() << std::endl;
		cat.makeSound();

		Cat* Lulu = new Cat;

		std::cout << Lulu->getType() <<std::endl;
		Lulu->makeSound();
		delete Lulu;
	}
	std::cout << std::string(50, '-') << std::endl;
	return (0);
}