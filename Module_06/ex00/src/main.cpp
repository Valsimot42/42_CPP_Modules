/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:26:26 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/28 18:46:30 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"
#include "../inc/Colors.hpp"

// int	main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 	{
// 		std::cout << RED << "Wrong number of args, has to be 1\n";
// 		return 1;
// 	}
// 	ScalarConverter::convertTypes(argv[1]);
// }

#include <limits>

int main() {
    char choice;

    std::cout << "Please select one of the following tests:\n";
    std::cout << "1. Char\n";
    std::cout << "2. Int\n";
    std::cout << "3. Double\n";
    std::cout << "4. Float\n";

    std::cout << "Enter your choice (1, 2, 3, or 4): ";
    std::cin >> choice;

    switch (choice) {
        case '1':
			char c;

            std::cout << "Please select a test for Char:\n";
			std::cout << "1. Valid Char\n";
			std::cout << "2. Invalid Char\n";
			std::cout << "3. String\n";
			std::cout << "4. Empty String\n";
			std::cout << "5. Non displayable Char\n";

            std::cout << "Enter your choice (1, 2, 3, 4, or 5): ";
			std::cin >> c;
			
			switch (c) {
				case '1':
					ScalarConverter::convertTypes("a");
					break;
				case '2':
					ScalarConverter::convertTypes("€");
					break;
				case '3':
					ScalarConverter::convertTypes("Hello");
					break;
				case '4':
					ScalarConverter::convertTypes("");
					break;
				case '5':
					ScalarConverter::convertTypes("NUL");
					break;					
			    }
            break;
        case '2':
            int i;

            std::cout << "Please select a test for Int:\n";
            std::cout << "1. Valid Int\n";
            std::cout << "2. Invalid Int\n";
            std::cout << "3. MAX_INT\n";
            std::cout << "4. MIN_INT\n";
            std::cout << "5. MAX_INT + 1\n";
            std::cout << "6. MIN_INT - 1\n";
            std::cout << "7. Zero value\n";
            std::cout << "8. '+' sign\n";

            std::cout << "Enter your choice (1, 2, 3, 4, 5, 6, or 7): ";
            std::cin >> i;

            switch (i) {
                case 1:
                    ScalarConverter::convertTypes("42");
                    break;
                case 2:
                    ScalarConverter::convertTypes("42a");
                    break;
                case 3:
                    ScalarConverter::convertTypes("2147483647");
                    break;
                case 4:
                    ScalarConverter::convertTypes("-2147483648");
                    break;
                case 5:
                    ScalarConverter::convertTypes("2147483648");
                    break;
                case 6:
                    ScalarConverter::convertTypes("-2147483649");
                    break;
                case 7:
                    ScalarConverter::convertTypes("0");
                    break;
                case 8:
                    ScalarConverter::convertTypes("+42");
                    break;
            }
            break;
        case '3':
            // Code for Double test
            break;
        case '4':
            // Code for Float test
            break;
        default:
            std::cout << "Invalid choice. Please enter 1, 2, 3, or 4.\n";
            return 1;
    }

    return 0;
}