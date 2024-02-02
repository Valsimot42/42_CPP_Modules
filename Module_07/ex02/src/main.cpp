/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:23:52 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/02 12:17:15 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

int main (){
	std::cout << GREEN << "--- TEST: CONSTRUCTION---" << RESET <<std::endl;
	try {
		Array<int> integerArray1(100);
		integerArray1.print();
		std::cout << CYAN << "Number at index[3]:  " << integerArray1[3] << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << GREEN << "--- TEST: COPY CONSTRUCTION ---" << RESET <<std::endl;
	try {
		Array<int> integerArray1(100);
		Array<int> integerArray2 = integerArray1;
		integerArray2.print();
		std::cout << CYAN << "Number at index[50]:  " << integerArray1[50] << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << GREEN << "--- TEST: WRONG INDEX ---" << RESET <<std::endl;
	try {
		Array<int> integerArray1(100);
		std::cout << CYAN << "Number at index[130]:  "<< integerArray1[130] << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << GREEN << "--- TEST: DECONSTRUCTOR ---" << RESET <<std::endl;
	try {
		Array<int> integerArray1(100);
		Array<int>integerArray2(integerArray1);
		std::cout << CYAN << "Objects have gone out of scope, destructors have been called. No segfault accured" << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN << "--- TEST: EMPTY ARRAY ---" << RESET <<std::endl;
	try {
		Array<int> integerArray1;
		integerArray1.print();
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << GREEN << "--- TEST: RETURN SIZE ---" << RESET <<std::endl;
	try {
		Array<int> integerArray1;
		std::cout << CYAN << "size of integerArray1: " << integerArray1.size() << RESET << std::endl;
		Array<int> integerArray2(100);
		std::cout << CYAN << "size of integerArray2: " << integerArray2.size() << RESET << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
    std::cout << GREEN << "--- TEST: SUBJECT ---" << RESET <<std::endl;
	try {
        int *a = new int();

        std::cout << CYAN << "a: " << *a << RESET << std::endl;

        delete a;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}