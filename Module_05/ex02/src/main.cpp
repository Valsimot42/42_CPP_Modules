/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:48:42 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/17 12:59:12 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"

int main() {
	std::cout << blue << "---TEST: FORMS---" << reset << std::endl;

	try {
		AForm Form1("Alexandria", 1, 1);
		std::cout << yellow << Form1 << reset;

		// {
			// Form Kuja("Kuja", 0, 0);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 1, 0);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 0, 1);
			// std::cout << red << Kuja << reset;
		// }
		
		AForm Form2("Cleyra", 150, 15);
		std::cout << yellow << Form2 << reset;

		// {
			// Form Kuja("Kuja", 151, 151);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 150, 151);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 151, 150);
			// std::cout << red << Kuja << reset;
		// }

		AForm Form3("Lindblum", 40, 42);
		std::cout << yellow << Form3 << reset;

		// {
			// Form Kuja("Kuja", -42, 42);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 42, -42);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", -42, -42);
			// std::cout << red << Kuja << reset;
		// }

		AForm Form4("Burmecia", 127, 127);
		std::cout << yellow << Form4 << reset;

		// {
			// Form Kuja("Kuja", 128, "128");
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", '127', 128);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 128.10, 127);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 127, 128.10);
			// std::cout << red << Kuja << reset;
		// }


		AForm Form5("Treno", 0177, 0177); // Octal literal
		std::cout << yellow << Form5 << reset;

		// {
			// Form Kuja("Kuja", 0178, 0178);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 0177, 0178);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 0178, 0177);
			// std::cout << red << Kuja << reset;
		// }
		
		AForm Form6("Dali", '@', '@'); // Character literal
		std::cout << yellow << Form6 << reset;

		// {
			// Form Kuja("Kuja", 'A', '€');
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", '€', 'A');
			// std::cout << red << Kuja << reset;
		// }
		
		AForm Form7("Madain Sari", 0x4a, 0x4a); // Hexadecimal literal
		std::cout << yellow << Form7 << reset;

		// {
			// Form Kuja("Kuja", 0x4b, 0x97);
			// std::cout << red << Kuja << reset;

			// Form Kuja("Kuja", 0x97, 0x4b);
			// std::cout << red << Kuja << reset;
		// }
		
		std::cout << blue << "---TEST: BUREAUCRATS---" << reset << std::endl;	

		Bureaucrat Alpha("Freya", 41);
		std::cout << green << Alpha << reset;
		
		Alpha.signForm(Form2);
		Alpha.signForm(Form3);
		Alpha.signForm(Form1);
		Alpha.signForm(Form4);
		Alpha.signForm(Form4);
		
	}

	catch (std::exception &e) {
		std::cout << red << e.what() << reset << std::endl;
	}

	std::cout << blue << "---END---" << reset << std::endl;
}

