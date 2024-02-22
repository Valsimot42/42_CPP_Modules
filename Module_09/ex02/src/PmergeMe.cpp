/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:50:28 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/22 15:24:16 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"
#include "../inc/Colors.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const & src) {
    *this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe & PmergeMe::operator=(PmergeMe const & rhs) {
    if (this != &rhs) {
        this->vec = rhs.vec;
        this->lst = rhs.lst;
    }
    return *this;
}

void findVectorStraggler(std::vector<int>& vec) {
    std::vector<int>::iterator it = vec.begin();
    std::vector<int>::iterator last = vec.end();
    int straggler = 0;
    
    std::cout << "Vector size: " << vec.size() << std::endl;
    if (vec.size() % 2 == 0) {
        std::cout << "Even number of elements" << std::endl;
    } else {
        std::cout << "Odd number of elements" << std::endl;
        straggler = vec.back();
        vec.pop_back();
    }

    while (it != last) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << GREEN << straggler << std::endl;

    std::vector<std::vector<int>> pairs = createVectorPairs(vec);

}

std::vector<std::vector<int>> createVectorPairs(const std::vector<int>& vec) {
    std::vector<std::vector<int>> pairs;
    std::vector<int>::const_iterator it = vec.begin();
    std::vector<int>::const_iterator last = vec.end();
    std::vector<int> pair;

    while (it != last) {
        pair.push_back(*it);
        ++it;
        pair.push_back(*it);
        pairs.push_back(pair);
        pair.clear();
        ++it;
    }
    
    printPairs(pairs);
    return pairs;
}

void printPairs(const std::vector<std::vector<int>>& pairs) {
    std::cout << "Pairs:" << std::endl;
    for (const auto& pair : pairs) {
        std::cout << "(" << pair[0] << ", " << pair[1] << ")" << std::endl;
    }
}