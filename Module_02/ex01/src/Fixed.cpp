/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:42:08 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/23 13:42:08 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed(): _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const number): _fixedPoint(number << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(float const number): _fixedPoint(roundf(number * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed	&Fixed::operator = (Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = copy._fixedPoint;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
	return ;
}

int		Fixed::getRawBits() const
{
	return (this->_fixedPoint);
}

float	Fixed::toFloat() const
{
	return ((float)this->_fixedPoint / (float)(1 << _fractionalBits));
}

int 	Fixed::toInt() const
{
	return (this->_fixedPoint >> _fractionalBits);
}

std::ostream &operator << (std::ostream &output, Fixed const &input)
{
	output << input.toFloat();
	return (output);
}