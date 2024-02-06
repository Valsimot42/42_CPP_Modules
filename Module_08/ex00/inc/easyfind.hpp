/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:46:35 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/06 16:45:46 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <map>

template <typename T>
typename T::iterator easyfind(T &container, const int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return it;
}

void printVector(const std::vector<int> &vec) {
    std::cout << BOLDMAGENTA << "Vector: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)
        std::cout << *it << " ";
    std::cout << RESET << std::endl;
}

#endif