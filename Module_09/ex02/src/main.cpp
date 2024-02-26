/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:50:31 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/26 13:19:36 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main(int ac, char **av) {
    // if (ac < 2) {
    //     std::cerr << "Usage: " << av[0] << " <arguments>" << std::endl;
    //     return 1;
    // }
    
    std::vector<int> vec;

    for (int i = 1; i < ac; ++i) {
        std::istringstream iss(av[i]);
        int num;
        while (iss >> num) {
            vec.push_back(num);
        }
    }
    
    findVectorStraggler(vec);
}

// #include <iostream>
// #include <vector>
// #include <list>
// #include <ctime>
// #include <limits>
// #include <algorithm>
// #include <cstring>
// #include <cstdlib>
// #include <stdexcept>

// class PmergeMe {
// private:
//     double _time_vec;
//     double _time_lst;

//     void insertionSort(std::vector<int> &vec) {
//         for (size_t i = 1; i < vec.size(); ++i) {
//             int key = vec[i];
//             int j = i - 1;
//             while (j >= 0 && vec[j] > key) {
//                 vec[j + 1] = vec[j];
//                 --j;
//             }
//             vec[j + 1] = key;
//         }
//     }

//     void mergeSort(std::list<int> &lst) {
//         if (lst.size() <= 1)
//             return;

//         std::list<int> left, right;
//         size_t middle = lst.size() / 2;

//         std::list<int>::iterator it = lst.begin();
//         for (size_t i = 0; i < middle; ++i) {
//             left.push_back(*it);
//             ++it;
//         }

//         for (size_t i = middle; i < lst.size(); ++i) {
//             right.push_back(*it);
//             ++it;
//         }

//         mergeSort(left);
//         mergeSort(right);
//         lst = mergeLists(left, right);
//     }

//     std::list<int> mergeLists(const std::list<int> &left, const std::list<int> &right) {
//         std::list<int> result;
//         std::list<int>::const_iterator left_it = left.begin();
//         std::list<int>::const_iterator right_it = right.begin();

//         while (left_it != left.end() && right_it != right.end()) {
//             if (*left_it < *right_it) {
//                 result.push_back(*left_it);
//                 ++left_it;
//             } else {
//                 result.push_back(*right_it);
//                 ++right_it;
//             }
//         }

//         while (left_it != left.end()) {
//             result.push_back(*left_it);
//             ++left_it;
//         }

//         while (right_it != right.end()) {
//             result.push_back(*right_it);
//             ++right_it;
//         }

//         return result;
//     }

// public:
//     PmergeMe() : _time_vec(0.0), _time_lst(0.0) {}

//     ~PmergeMe() {}

//     void createContainers(std::vector<int> &vec, std::list<int> &lst, char **argv) {
//         for (int i = 1; argv[i]; ++i) {
//             if (std::string(argv[i]).find_first_not_of("0123456789") != std::string::npos || std::strlen(argv[i]) > 10)
//                 throw ArgumentIsNotANumberException();
//             if (std::atol(argv[i]) > std::numeric_limits<int>::max())
//                 throw ArgumentIsNotANumberException();
//             vec.push_back(std::atoi(argv[i]));
//             lst.push_back(std::atoi(argv[i]));
//         }
//         if (_checkDuplicates(lst))
//             throw DuplicateInArgumentsException();
//     }

//     void displaySequence(const std::vector<int> &vec) {
//         std::cout << "Unsorted sequence: ";
//         for (size_t i = 0; i < vec.size(); ++i)
//             std::cout << vec[i] << " ";
//         std::cout << std::endl;
//     }

//     // void displaySequence(const std::list<int> &lst) {
//     //     std::cout << "Unsorted sequence: ";
//     //     for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//     //         std::cout << *it << " ";
//     //     std::cout << std::endl;
//     // }

//     void sortTime(std::vector<int> &vec, std::list<int> &lst) {
//         clock_t start = clock();
//         insertionSort(vec);
//         _time_vec = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1000.0;

//         start = clock();
//         mergeSort(lst);
//         _time_lst = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1000.0;
//     }

//     void displaySorted(const std::vector<int> &vec) {
//         std::cout << "Sorted sequence: ";
//         for (size_t i = 0; i < vec.size(); ++i)
//             std::cout << vec[i] << " ";
//         std::cout << std::endl;
//     }

//     void displaySorted(const std::list<int> &lst) {
//         std::cout << "Sorted sequence: ";
//         for (std::list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it)
//             std::cout << *it << " ";
//         std::cout << std::endl;
//     }

//     double getTimeVec() const {
//         return _time_vec;
//     }

//     double getTimeLst() const {
//         return _time_lst;
//     }

//     class ArgumentIsNotANumberException : public std::exception {
//     public:
//         const char *what() const throw() {
//             return "Argument List Contains a non number argument.";
//         }
//     };

//     class DuplicateInArgumentsException : public std::exception {
//     public:
//         const char *what() const throw() {
//             return "Argument List has a duplicate.";
//         }
//     };

//     bool _checkDuplicates(const std::list<int> &lst) {
//         std::list<int> tmp = lst;
//         tmp.sort();
//         tmp.unique();
//         return lst.size() != tmp.size();
//     }
// };

// int main(int argc, char **argv) {
//     try {
//         if (argc < 2) {
//             std::cerr << "Usage: " << argv[0] << " <arguments>" << std::endl;
//             return 1;
//         }

//         std::vector<int> vec;
//         std::list<int> lst;

//         PmergeMe pmerge;
//         pmerge.createContainers(vec, lst, argv);

//         pmerge.sortTime(vec, lst);


//         pmerge.displaySorted(vec);
//         pmerge.displaySorted(lst);
//         std::cout << "Time taken by insertion sort on vector: " << pmerge.getTimeVec() << " milliseconds" << std::endl;
//         std::cout << "Time taken by merge sort on list: " << pmerge.getTimeLst() << " milliseconds" << std::endl;

//     } catch (const std::exception &e) {
//         std::cerr << "Error: " << e.what() << std::endl;
//         return 1;
//     }

//     return 0;
// }




// #include "../inc/PmergeMe.hpp"

// int main(int argc, char *argv[])
// {
// 	if (argc < 2)
// 	{
// 		std::cerr << "Not enough arguments.\n";
// 		return 1;
// 	}
// 	PmergeMe a;
// 	std::vector<int>	vec;
// 	std::list<int>		lst;
// 	try
// 	{
// 		a.createContainers(vec, lst, argv);
// 		std::cout << "Before: ";
// 		a.iterateVec(vec);
// 		a.sortTime(vec, lst);
// 		std::cout << "After : ";
// 		a.iterateVec(vec);
// 		std::cout << "Time to process a range of " << vec.size() << " elements with std::vector	: " << std::fixed << std::setprecision(5) << a.getTimeVec() << " ms" << std::endl;
// 		std::cout << "Time to process a range of " << vec.size() << " elements with std::list	: " << a.getTimeLst() << " ms" << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cerr << e.what() << std::endl;
// 	}
// }