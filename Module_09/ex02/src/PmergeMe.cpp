/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:50:28 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/26 13:05:17 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"
#include "../inc/Colors.hpp"


PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& src) {
    *this = src;
}

PmergeMe::~PmergeMe() {}

PmergeMe& PmergeMe::operator=(const PmergeMe& rhs) {
    if (this != &rhs) {
        this->vec = rhs.vec;
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
    printPairs(pairs); // second
    sortPairsByLargerValue(pairs);
    printPairs(pairs); // third
    
    std::vector<int> remainingElements;
    fordJohnson(pairs, remainingElements);

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

    printPairs(pairs); // first
    sortEachPair(pairs);
    return pairs;
}

void printPairs(const std::vector<std::vector<int>>& pairs) {
    std::cout << "Pairs:" << std::endl;
    for (std::vector<std::vector<int>>::const_iterator it = pairs.begin(); it != pairs.end(); ++it) {
        const std::vector<int>& pair = *it;
        std::cout << "(" << pair[0] << ", " << pair[1] << ")" << std::endl;
    }
}

void sortEachPair(std::vector<std::vector<int>>& pairs) {
    for (std::vector<std::vector<int>>::iterator it = pairs.begin(); it != pairs.end(); ++it) {
        std::vector<int>& pair = *it;
        if (pair[0] > pair[1]) {
            std::swap(pair[0], pair[1]);
        }
    }
}

void sortPairsByLargerValue(std::vector<std::vector<int>>& pairs) {
    insertionSortPairs(pairs, 0, (pairs.size() - 1));
}

void insertionSortPairs(std::vector<std::vector<int>>& pairs, int low, int high) {
    if (low < high) {
        insertionSortPairs(pairs, low, high - 1);
        insert(pairs, high);
    }
}

void insert(std::vector<std::vector<int>>& pairs, int high) {
    std::vector<int> pair = pairs[high];
    int j = high - 1;
    while (j >= 0 && pairs[j][1] > pair[1]) {
        pairs[j + 1] = pairs[j];
        --j;
    }
    pairs[j + 1] = pair;
}

void fordJohnson(std::vector<std::vector<int>>& pairs, std::vector<int>& remainingElements) {
    std::vector<int> sortedArrayS;
    for (size_t i = 0; i < pairs.size(); ++i) {
        sortedArrayS.push_back(pairs[i][1]);
        remainingElements.push_back(pairs[i][0]); // Include smaller element as remaining
    }
    std::sort(sortedArrayS.begin(), sortedArrayS.end());

    std::cout << "Sorted array S:" << std::endl;
    for (size_t i = 0; i < sortedArrayS.size(); ++i) {
        std::cout << sortedArrayS[i] << " ";
    }
    std::cout << std::endl;

    // Process remaining elements
    std::sort(remainingElements.begin(), remainingElements.end());

    std::cout << "Remaining elements after processing pairs:" << std::endl;
    for (size_t i = 0; i < remainingElements.size(); ++i) {
        std::cout << remainingElements[i] << " ";
    }
    std::cout << std::endl;

    // Combine sorted pairs and remaining elements
    std::vector<int> result;
    result.reserve(sortedArrayS.size() + remainingElements.size());
    std::merge(sortedArrayS.begin(), sortedArrayS.end(), remainingElements.begin(), remainingElements.end(), std::back_inserter(result));

    // Output the final sorted sequence
    std::cout << "Final sorted sequence:" << std::endl;
    for (size_t i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
}
