/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:04:11 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/02 12:16:51 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template<typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n) {
    T value = 0;
    for (unsigned int i = 0; i < n; i++) {
        std::cout << YELLOW;
        _array[i] = value;
        value += 2;
    }
}

template<typename T>
Array<T>::Array(const Array &copy) {
    _array = NULL;
    *this = copy;
}

template<typename T>
Array<T>::~Array() {
    if (this->_array)
        delete [] this->_array;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &copy) {
    if (this != &copy) {
        delete [] this->_array;
        this->_array = new T[copy._size];
        this->_size = copy._size;
        for (unsigned int i = 0; i < copy._size; i++)
            this->_array[i] = copy._array[i];
    }
    return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int i) {
    if (i >= this->_size)
        throw Array::OutOfRangeException();
    return (this->_array[i]);
}

template<typename T>
unsigned int Array<T>::size() const {
    return (this->_size);
}

template<typename T>
void Array<T>::print() const {
    if(this->_array){
        for (unsigned int i = 0; i < this->_size; i++)
            std::cout << this->_array[i] << " ";
        std::cout << std::endl;
    }
    else
        std::cout << RED "Error: Array is empty" RESET << std::endl;
}

template<typename T>
const char *Array<T>::OutOfRangeException::what() const throw() {
    return (RED "Error: Out of range" RESET);
}

#endif