/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:48:42 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/19 14:22:49 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main() {
	std::cout << blue << "---TEST: CREATION OF BUREAUCRATS---" << reset << std::endl;

	try {
		Bureaucrat Zidane("Zidane", 30);
		std::cout << green << Zidane << reset;

//		Bureaucrat Kuja("Kuja", -30);
//		std::cout << red << Kuja << reset;


		Bureaucrat Vivi("Vivi", 150);
		std::cout << green << Vivi << reset;

		// Bureaucrat Kuja("Kuja", 185);
		// std::cout << red << Kuja << reset;


		Bureaucrat Steiner("Steiner", 42);
		std::cout << green << Steiner << reset;

//		Bureaucrat Kuja("Kuja", 120.10);
//		std::cout << red << Kuja << reset;


		Bureaucrat Garnet("Garnet", 127);
		std::cout << green << Garnet << reset;

//		Bureaucrat Kuja("Kuja", "5");
//		std::cout << red << Kuja << reset;


		Bureaucrat Eiko("Eiko", 0177);	// Octal literal
		std::cout << green << Eiko << reset;

//		Bureaucrat Kuja("Kuja", 0361);
//		std::cout << red << Kuja << reset;


		Bureaucrat Quina("Quina", '@');		// Character literal
		std::cout << green << Quina << reset;

//		Bureaucrat Kuja("Kuja", '€');
//		std::cout << red << Kuja << reset;


		Bureaucrat Amarant("Amarant", 0x4a);	// Hexadecimal literal
		std::cout << green << Amarant << reset;

//		Bureaucrat Kuja("Kuja", 0x97);
//		std::cout << red << Kuja << reset;


		Bureaucrat Freya("Freya", 1);
		std::cout << green << Freya << reset;

//		Bureaucrat Kuja("Kuja", 195);
//		std::cout << red << Kuja << reset;
	}
	catch (std::exception &e) {
		std::cerr << red << e.what() << reset << std::endl;
	}

	std::cout << blue << "---TEST: INCREMENT/DECREMENT---" << reset << std::endl;

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

	std::cout << blue << "---TEST: GRADE TOO HIGH---" << reset << std::endl;

	try {
		Bureaucrat Beta("Fratley", 1);

		std::cout << green << Beta << reset;
		Beta.incrementGrade();
		std::cout << yellow << Beta << reset;
	}
	catch (std::exception &e) {
		std::cerr << red << e.what() << reset << std::endl;
	}

	std::cout << blue << "---TEST: GRADE TOO LOW---" << reset << std::endl;

	try {
		Bureaucrat Gamma("Puck", 150);

		std::cout << green << Gamma << reset;
		Gamma.decrementGrade();
		std::cout << yellow << Gamma << reset;
	}
	catch (std::exception &e) {
		std::cerr << red << e.what() << reset << std::endl;
	}

	std::cout << blue << "---TEST: COPY CONSTRUCTOR---" << reset << std::endl;

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

