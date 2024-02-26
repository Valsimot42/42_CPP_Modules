/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:14:01 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/26 12:56:56 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <cstdlib>
# include <string>
# include <vector>
# include <list>
# include <algorithm>
# include <iterator>
# include <ctime>
# include <exception>
# include <iomanip>
# include <limits>
# include <cstring>
# include <sstream>

class PmergeMe
{
private:
    std::vector<int> vec;
    std::list<int> lst;
    
    PmergeMe();
    PmergeMe(PmergeMe const & src);
    ~PmergeMe();
    PmergeMe & operator=(PmergeMe const & rhs);

public:

};

void findVectorStraggler(std::vector<int>& vec);
//void findListStraggler(std::list<int>& lst);

void printPairs(const std::vector<std::vector<int> >& pairs);
void sortEachPair(std::vector<std::vector<int> >& pairs);

void sortPairsByLargerValue(std::vector<std::vector<int> >& pairs);
void insertionSortPairs(std::vector<std::vector<int> >& pairs, int low, int high);
void insert(std::vector<std::vector<int> >& pairs, int high);

void fordJohnson(std::vector<std::vector<int>>& pairs, std::vector<int>& remainingElements);


std::vector<std::vector<int> > createVectorPairs(const std::vector<int>& vec);

#endif