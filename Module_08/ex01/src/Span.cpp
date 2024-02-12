/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 10:48:59 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/12 11:17:31 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(unsigned int N) : _spanLimit(N) {}

Span::Span() : _spanLimit(0) {}

Span::Span(Span const &src) {
    *this = src;
}

Span &Span::operator =(Span const &src) {
    if (this != &src)
    {
        this->_spanLimit = src._spanLimit;
        this->_spanContainer = src._spanContainer;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int N) {
    if (this->_spanContainer.size() >= this->_spanLimit)
        throw Span::ContainerIsFullException();
    this->_spanContainer.push_back(N);
}

int Span::shortestSpan() {
    if (_spanContainer.size() <= 1)
        throw Span::NoSpanException();
    int shortest = std::numeric_limits<int>::max();
    std::vector<int> tmp = _spanContainer;
    std::sort(tmp.begin(), tmp.end());
    for (std::vector<int>::const_iterator it = tmp.begin(); it + 1 < tmp.end(); it++) {
        if (*(it + 1) - *it < shortest)
            shortest = *(it + 1) - *it;
    }
    return shortest;
}

int Span::longestSpan() {
    if(_spanContainer.size() <= 1)
        throw Span::NoSpanException();
    int min_element = *std::min_element(_spanContainer.begin(), _spanContainer.end());
    int max_element = *std::max_element(_spanContainer.begin(), _spanContainer.end());
    return max_element - min_element;
}

void Span::fillContainer(int N, int min, int max) {
    if (N > this->_spanLimit)
        throw Span::ContainerIsFullException();
    std::srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < N; i++)
        this->_spanContainer.push_back(rand() % (max - min) + min);
}

void Span::findNumber() {
    if (this->_spanContainer.size() <= 1)
        throw Span::NoSpanException();
    std::vector<int>::iterator it = this->_spanContainer.begin();
    std::vector<int>::iterator end = this->_spanContainer.end();
    _smallestNumber = *it;
    _biggestNumber = *it;
    while (it != end) {
        if (*it < _smallestNumber)
            _smallestNumber = *it;
        else if (*it > _biggestNumber)
            _biggestNumber = *it;
        it++;
    }
}

void Span::printContainer() {
    std::vector<int>::iterator it = this->_spanContainer.begin();
    std::vector<int>::iterator it2 = this->_spanContainer.end();
    findNumber();
    while (it != it2) {
        if (*it == this->_smallestNumber)
            std::cout << GREEN << *it << RESET << " ";
        else if (*it == this->_biggestNumber)
            std::cout << YELLOW << *it << RESET << " ";
        else
            std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
}

void Span::printNumbers() {
    std::cout << "smallest number: " << this->_smallestNumber << std::endl;
	std::cout << "biggest number: " << this->_biggestNumber << std::endl;   
}

const char *Span::ContainerIsFullException::what() const throw() {
	return "Span is full";
}

const char *Span::NoSpanException::what() const throw() {
	return "Span is empty or contains only one element";
}