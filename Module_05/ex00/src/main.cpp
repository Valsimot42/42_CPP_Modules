/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:48:42 by tbolkova          #+#    #+#             */
/*   Updated: 2023/12/16 12:48:42 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main() {
	std::cout << blue << "---INCREMENT/DECREMENT---" << reset << std::endl;

	try {
		Bureaucrat Alpha("Freya", 150);

		std::cout << green << Alpha << reset;
		for (int i = 0; i < 5; i++){
			Alpha.incrementGrade();
			std::cout << yellow << Alpha << reset;
		}
		for (int i = 0; i < 6; i++){
			Alpha.decrementGrade();
			std::cout << yellow << Alpha << reset;
		}
		for (int i = 0; i < 10; i++){
			Alpha.incrementGrade();
			std::cout << Alpha;
		}
	}
	catch (std::exception &e) {
		std::cerr << red << e.what() << reset << std::endl;
	}

	std::cout << blue << "---GRADE TOO HIGH---" << reset << std::endl;

	try {
		Bureaucrat Beta("Fratley", 1);

		std::cout << green << Beta << reset;
		Beta.incrementGrade();
		std::cout << yellow << Beta << reset;
	}
	catch (std::exception &e) {
		std::cerr << red << e.what() << reset << std::endl;
	}

	std::cout << blue << "---GRADE TOO LOW---" << reset << std::endl;

	try {
		Bureaucrat Gamma("Puck", 150);

		std::cout << green << Gamma << reset;
		Gamma.decrementGrade();
		std::cout << yellow << Gamma << reset;
	}
	catch (std::exception &e) {
		std::cerr << red << e.what() << reset << std::endl;
	}

	std::cout << blue << "---COPY CONSTRUCTOR---" << reset << std::endl;

		Bureaucrat Delta("Kuja", 69);
		Bureaucrat Epsilon(Delta);
		Bureaucrat Zeta = Delta;

		std::cout << green << Delta << reset;

		Epsilon.incrementGrade();
		std::cout << yellow << Epsilon << reset;

		Zeta.decrementGrade();
		std::cout << yellow << Zeta << reset;

	std::cout << blue << "---END---" << reset << std::endl;
}

