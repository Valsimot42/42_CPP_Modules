/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:00:04 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/12 13:06:40 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

int main() {
    std::cout << BOLDBLUE << "----TESTER----" << RESET << std::endl;
    std::cout << "Select a test case:\n";
    std::cout << "1. SPAN: Valid argument + Valid number of elements\n";
    std::cout << "2. SPAN: Valid argument + Invalid number of elements\n";
    std::cout << "3. SPAN: Invalid argument\n";
    std::cout << "4. Help\n";
    std::cout << "0. Exit\n";

    std::string boundary = "----------------------------------------";

    while (true) {
        
        int choice;
        std::cout << "Enter your choice: (1, 2, 3, 4, 0): ";
        std::cin >> choice;

        switch (choice) {
            
            case 1:{
                std::cout << BOLDBLUE << "----SPAN: Valid argument + Valid number of elements----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;
				try {
					Span sp1 = Span(7);
					sp1.addNumber(5);
					sp1.addNumber(3);
					sp1.addNumber(1);
					sp1.addNumber(17);
					sp1.addNumber(18);
					sp1.addNumber(9);
					sp1.addNumber(11);
					sp1.printContainer();
					sp1.printNumbers();

					std::cout << BOLDCYAN << "Shortest span: " << sp1.shortestSpan() << RESET << std::endl;
					std::cout << BOLDMAGENTA << "Longest span: " << sp1.longestSpan() << RESET << std::endl;
				}
				catch (std::exception &e) {
					std::cout << BOLDRED << e.what() << std::endl;
				}

                std::cout << BOLDWHITE << boundary << RESET << std::endl;
                break;
            }
            case 2:{
                std::cout << BOLDBLUE << "----SPAN: Valid argument + Invalid number of elements----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

                try {
					Span sp1 = Span(12);
					sp1.fillContainer(10, 20, 500);
					sp1.printContainer();
					sp1.printNumbers();

					std::cout << BOLDCYAN << "Shortest span: " << sp1.shortestSpan() << RESET << std::endl;
					std::cout << BOLDMAGENTA << "Longest span: " << sp1.longestSpan() << RESET << std::endl;
				}
				catch (std::exception &e) {
					std::cout << BOLDRED << e.what() << std::endl;
				}

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

				try {
					Span sp2 = Span(50);
					sp2.fillContainer(100, 250, 1000);
					sp2.printContainer();
					sp2.printNumbers();

					std::cout << BOLDCYAN << "Shortest span: " << sp2.shortestSpan() << RESET << std::endl;
					std::cout << BOLDMAGENTA << "Longest span: " << sp2.longestSpan() << RESET << std::endl;
				}
				catch (std::exception &e) {
					std::cout << BOLDRED << e.what() << std::endl;
				}

				std::cout << BOLDWHITE << boundary << RESET << std::endl;
                break;
            }

            case 3:{
                std::cout << BOLDBLUE << "----SPAN: Invalid argument----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

                try {
					Span sp2 = Span(1);
					sp2.fillContainer(1, 13, 59);
					sp2.printContainer();
					sp2.printNumbers();

					std::cout << BOLDCYAN << "Shortest span: " << sp2.shortestSpan() << RESET << std::endl;
					std::cout << BOLDMAGENTA << "Longest span: " << sp2.longestSpan() << RESET << std::endl;
				}
				catch (std::exception &e) {
					std::cout << BOLDRED << e.what() << std::endl;
				}

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

				try {
					Span sp2 = Span('A');
					sp2.printContainer();
					sp2.printNumbers();

					std::cout << BOLDCYAN << "Shortest span: " << sp2.shortestSpan() << RESET << std::endl;
					std::cout << BOLDMAGENTA << "Longest span: " << sp2.longestSpan() << RESET << std::endl;
				}
				catch (std::exception &e) {
					std::cout << BOLDRED << e.what() << std::endl;
				}

				std::cout << BOLDWHITE << boundary << RESET << std::endl;

                break;
            }
            
            case 4:{
                std::cout << BOLDBLUE << "----HELP----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

                std::cout << "This program demonstrates the usage of the STL vector container.\n";
                std::cout << "The program provides a menu to select a test case.\n";
                std::cout << "The test cases include:\n";
                std::cout << "1. VECTOR: Accessing Elements\n";
                std::cout << "2. VECTOR: Modifiers\n";
                std::cout << "3. VECTOR: Capacity\n";
                std::cout << "4. VECTOR: Iterators\n";
                std::cout << "5. LIST\n";
                std::cout << "6. Help\n";
                std::cout << "0. Exit\n";

                std::cout << BOLDWHITE << boundary << RESET << std::endl;
                break;
            }
            
            case 0:{
                std::cout << BOLDBLUE << "----EXIT----" << RESET << std::endl;
                return 0;
            }

            default:
                std::cout << "Invalid choice" << std::endl;
                break;
        }
    }
    return 0;
}