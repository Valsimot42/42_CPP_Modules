/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:40:42 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/01 12:18:08 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"
#include <stdlib.h>

template <typename T>
void my_print(T value){
    std::cout << value << std::endl;
}

int main(){
    int int_array[5] = {1, 2, 3, 4, 5};
    std::string str_array[7] = {"Hello", "World", "!", "How", "are", "you", "?"};
    double double_array[9] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};
    std::string empty_array[6] = {"", "Empty", "", "String", "...", ""};

    std::cout << BOLDGREEN << "Testing with int array:" << RESET << std::endl;
    iterate(int_array, 5, my_print);
    std::cout << std::endl;

    std::cout << BOLDBLUE << "Testing with string array:" << RESET << std::endl;
    iterate(str_array, 7, my_print);
    std::cout << std::endl;

    std::cout << BOLDYELLOW << "Testing with double array:" << RESET << std::endl;
    iterate(double_array, 9, my_print);
    std::cout << std::endl;

    std::cout << BOLDMAGENTA << "Testing with empty string array:" << RESET << std::endl;
    iterate(empty_array, 6, my_print);
    std::cout << std::endl;

    return (0);
}