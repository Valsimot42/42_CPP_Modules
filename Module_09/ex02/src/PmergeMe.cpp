/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:50:28 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/27 11:35:52 by tbolkova         ###   ########.fr       */
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
        straggler = vec.back();  // Store the straggler element
        vec.pop_back();          // Remove the straggler element from the vector
    }

    while (it != last) {
        std::cout << *it << " ";
        ++it;
    }
    std::cout << "Straggler: " << RED << straggler << RESET << std::endl;

    std::vector<std::vector<int>> pairs = createVectorPairs(vec);
    printPairs(pairs); // second
    sortPairsByLargerValue(pairs);

    clock_t startSort = clock();
    sortPairsByLargerValue(pairs);
    clock_t endSort = clock();
    double sortTime = double(endSort - startSort) / CLOCKS_PER_SEC * 10; // Convert to microseconds
    std::cout << "Time taken by sortPairsByLargerValue: " << sortTime << " us" << std::endl;
    
    std::cout << GREEN;
    printPairs(pairs); // third
    std::cout << RESET;

    std::vector<int> remainingElements;
    if (straggler != 0) {
        remainingElements.push_back(straggler);  // Include the straggler element
    }
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
    
    // Check if there's a straggler element
    if (!remainingElements.empty()) {
        // Add the straggler element to sortedArrayS
        sortedArrayS.push_back(remainingElements.back());
        // Remove the straggler from remainingElements
        remainingElements.pop_back();
    }

    // Sort sortedArrayS
    std::sort(sortedArrayS.begin(), sortedArrayS.end());

    // Output sortedArrayS
    std::cout << "Sorted array S:" << std::endl;
    for (size_t i = 0; i < sortedArrayS.size(); ++i) {
        std::cout << sortedArrayS[i] << " ";
    }
    std::cout << std::endl;

    // Process remaining elements
    std::sort(remainingElements.begin(), remainingElements.end());

    // Output remainingElements after processing pairs
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


// -----===== LIST =====-----
void findListStraggler(std::list<int>& lst) {
    std::list<int>::iterator it = lst.begin();
    std::list<int>::iterator last = lst.end();
    int straggler = 0;

    std::cout << "List size: " << lst.size() << std::endl;
    if (lst.size() % 2 == 0) {
        std::cout << "Even number of elements" << std::endl;
    } else {
        std::cout << "Odd number of elements" << std::endl;
        straggler = lst.back();  // Store the straggler element
        lst.pop_back();          // Remove the straggler element from the list
    }

    std::cout << "Straggler: " << RED << straggler << RESET << std::endl;

    std::list<std::list<int> > pairs = createListPairs(lst);
    printPairs(pairs); // second

    clock_t startSort = clock();
    sortPairsByLargerValue(pairs);
    clock_t endSort = clock();
    double sortTime = double(endSort - startSort) / CLOCKS_PER_SEC * 1; // Convert to microseconds
    std::cout << "Time taken by sortPairsByLargerValue: " << sortTime << " us" << std::endl;

    std::cout << GREEN;
    printPairs(pairs); // third
    std::cout << RESET;

    std::list<int> remainingElements;
    if (straggler != 0) {
        remainingElements.push_back(straggler);  // Include the straggler element
    }
    fordJohnson(pairs, remainingElements);
}

std::list<std::list<int> > createListPairs(const std::list<int>& lst) {
    std::list<std::list<int> > pairs;
    std::list<int>::const_iterator it = lst.begin();
    std::list<int>::const_iterator last = lst.end();
    std::list<int> pair;

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

void printPairs(const std::list<std::list<int> >& pairs) {
    std::cout << "Pairs:" << std::endl;
    for (std::list<std::list<int> >::const_iterator it = pairs.begin(); it != pairs.end(); ++it) {
        const std::list<int>& pair = *it;
        std::cout << "(" << pair.front() << ", " << pair.back() << ")" << std::endl;
    }
}

void sortEachPair(std::list<std::list<int> >& pairs) {
    for (std::list<std::list<int> >::iterator it = pairs.begin(); it != pairs.end(); ++it) {
        std::list<int>& pair = *it;
        if (pair.front() > pair.back()) {
            std::swap(pair.front(), pair.back());
        }
    }
}

void sortPairsByLargerValue(std::list<std::list<int> >& pairs) {
    insertionSortPairs(pairs);
}

void insertionSortPairs(std::list<std::list<int> >& pairs) {
    if (pairs.size() <= 1) return;

    std::list<std::list<int> > sortedPairs;
    sortedPairs.push_back(pairs.front());
    pairs.pop_front();

    while (!pairs.empty()) {
        std::list<std::list<int> >::iterator it = sortedPairs.begin();
        while (it != sortedPairs.end() && (*it).back() <= pairs.front().back()) {
            ++it;
        }
        sortedPairs.insert(it, pairs.front());
        pairs.pop_front();
    }

    pairs = sortedPairs;
}

void fordJohnson(std::list<std::list<int> >& pairs, std::list<int>& remainingElements) {
    std::list<int> sortedArrayS;
    for (std::list<std::list<int> >::iterator it = pairs.begin(); it != pairs.end(); ++it) {
        sortedArrayS.push_back((*it).back());
        remainingElements.push_back((*it).front()); // Include smaller element as remaining
    }

    // Check if there's a straggler element
    if (!remainingElements.empty()) {
        // Add the straggler element to sortedArrayS
        sortedArrayS.push_back(remainingElements.back());
        // Remove the straggler from remainingElements
        remainingElements.pop_back();
    }

    // Sort sortedArrayS
    sortedArrayS.sort();

    // Output sortedArrayS
    std::cout << "Sorted array S:" << std::endl;
    for (std::list<int>::iterator it = sortedArrayS.begin(); it != sortedArrayS.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Process remaining elements
    remainingElements.sort();

    // Output remainingElements after processing pairs
    std::cout << "Remaining elements after processing pairs:" << std::endl;
    for (std::list<int>::iterator it = remainingElements.begin(); it != remainingElements.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Combine sorted pairs and remaining elements
    std::list<int> result;
    std::merge(sortedArrayS.begin(), sortedArrayS.end(), remainingElements.begin(), remainingElements.end(), std::back_inserter(result));

    // Output the final sorted sequence
    std::cout << "Final sorted sequence:" << std::endl;
    for (std::list<int>::iterator it = result.begin(); it != result.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

