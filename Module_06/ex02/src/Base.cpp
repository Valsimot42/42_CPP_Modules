/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:00:30 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/30 11:58:51 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"

Base::~Base() {}

Base * generate(void)
{
	static bool srandCalled = false;

	if (!srandCalled) {
		std::srand(std::time(0));
		srandCalled = true;
	}

	int rand_num = std::rand() % 3;
	if (rand_num == 0){
		std::cout << BLUE << "new random class A got created\n" << RESET;
		return new A;
	}
	else if (rand_num == 1) {
		std::cout << BLUE << "new random class B got created\n" << RESET;
		return new B;
	}
	else {
		std::cout << BLUE << "new random class C got created\n" << RESET;
		return new C;
	}
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << GREEN << "*A" << RESET << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << GREEN << "*B" << RESET << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << GREEN << "*C" << RESET << std::endl;
    else
        std::cout << RED << "Unknown class" << RESET << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << GREEN << "&A" << RESET << std::endl;
        (void)a;
    }
    catch (std::exception &e){}
    try
    {
        B &b = dynamic_cast<B &>(p);
        std::cout << GREEN << "&B" << RESET << std::endl;
        (void)b;
    }
    catch (std::exception &e){}
    try
    {
        C &c = dynamic_cast<C &>(p);
        std::cout << GREEN << "&C" << RESET << std::endl;
        (void)c;
    }
    catch (std::exception &e) {}
}