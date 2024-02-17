/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:10:37 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/17 11:49:28 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchangeUtils.hpp"
#include "../inc/BitcoinExchange.hpp"


int main(int ac, char** av) {
  try {
    checkInput(ac);
    std::string inputFilePath = static_cast<std::string>(av[1]);
    BitcoinExchange bitExchange = BitcoinExchange(inputFilePath);
    bitExchange.processInput();
  }
  catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}