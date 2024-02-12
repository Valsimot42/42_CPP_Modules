/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:40:47 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/12 12:38:00 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits>
#include <list>
#include <algorithm>
#include "Colors.hpp"

class Span {
    private:
        unsigned int _spanLimit;
        std::vector<int> _spanContainer;
        int _smallestNumber;
        int _biggestNumber;

    public:
        Span(unsigned int N);
        Span();
        Span(Span const &src);
        Span &operator = (Span const &src);
        ~Span();
        
        void fillContainer(int N, int min, int max);
        void printContainer();
        void printNumbers();
        void findNumber();
        void addNumber(int N);
        int shortestSpan();
        int longestSpan();
        
    class ContainerIsFullException: public std::exception {
        public:
            virtual const char *what() const throw();
    };
    
    class NoSpanException: public std::exception {
        public:
            virtual const char *what() const throw();
    };
};

#endif