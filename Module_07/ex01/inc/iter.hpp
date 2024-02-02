/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 15:38:26 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/31 15:40:32 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include "Colors.hpp"

template<typename T>
void iterate(T *array, int size, void (*f)(T const &)){
    for (int i = 0; i < size; i++)
        f(array[i]);
}

#endif