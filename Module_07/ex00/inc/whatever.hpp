/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:21:43 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/31 14:48:03 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include "Colors.hpp"

template<typename T>
void swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T min(T a, T b){
    if (a == b) {
        std::cout << RED;
        return (a);
    }
    std::cout << GREEN;
    return (a < b ? a : b);
}

template<typename T>
T max(T a, T b){
    if (a == b) {
        std::cout << RED;
        return (a);
    }
    std::cout << GREEN;
    return (a > b ? a : b);
}

#endif