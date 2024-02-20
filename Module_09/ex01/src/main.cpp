/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:57:08 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/20 15:13:48 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/RPN.hpp"

int main(int ac, char **av) {
    try {
        if (ac != 2)
            throw std::invalid_argument(RED "Error: invalid number of arguments" RESET);
        std::string input = static_cast<std::string>(av[1]);
        checkInput(input);
        run(input);
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}