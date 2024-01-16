/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:48:42 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/16 18:16:52 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

int main() {
	std::cout << blue << "---TEST: FORMS---" << reset << std::endl;

	try {
		Form Form1("Form 1", 10, 10);
		Bureaucrat Alpha("Freya", 2);

		
		std::cout << green << Form1 << reset;
		std::cout << green << Alpha << reset;

		Form1.beSigned(&Alpha);
		
		Alpha.signForm(Form1.beSigned(&Alpha), "Form 1");

		
	}

	catch (std::exception &e) {
		std::cout << red << e.what() << reset << std::endl;
	}

	std::cout << blue << "---END---" << reset << std::endl;
}

