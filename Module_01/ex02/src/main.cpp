/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:18:34 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/18 10:40:36 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string	string;
	std::string *stringPTR;
	std::string &stringREF = string;

	string = "HI THIS IS BRAIN";
	stringPTR = &string;

	std::cout << "-----" << std::endl;
	std::cout << "Memory address of string: " << &string << std::endl;
	std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address of stringREF: " << &stringREF << std::endl;
	std::cout << "-----" << std::endl;
	std::cout << "Value of string: " << string << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;
	std::cout << "-----" << std::endl;

	return (0);
}