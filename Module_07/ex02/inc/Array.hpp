/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:23:49 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/01 13:14:30 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Colors.hpp"

template<typename T>
class Array {
public:
    Array();
    Array(unsigned int n);
    Array(const Array &copy);
    ~Array();
    Array &operator=(const Array &copy);
    T &operator[](unsigned int i);
    unsigned int size() const;
    void print() const;

    class OutOfRangeException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
    
private:
    T *_array;
    unsigned int _size;
};

#include "Array.tpp"
#endif