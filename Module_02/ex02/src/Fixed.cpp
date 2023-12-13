/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:58:12 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/25 09:58:12 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : _fixedPoint(0) {
	return ;
}

Fixed::Fixed(int const number): _fixedPoint(number << _fractionalBits) {
	return ;
}

Fixed::Fixed(float const number): _fixedPoint(roundf(number * (1 << _fractionalBits))) {
	return ;
}

Fixed::Fixed(Fixed const &copy) {
	*this = copy;
	return ;
}

Fixed	&Fixed::operator = (Fixed const &copy) {
	this->_fixedPoint = copy._fixedPoint;
	return (*this) ;
}

Fixed::~Fixed() {
	return ;
}

bool	Fixed::operator > (Fixed const &copy) const {
	return (this->_fixedPoint > copy._fixedPoint);
}

bool	Fixed::operator < (Fixed const &copy) const {
	return (this->_fixedPoint < copy._fixedPoint);
}

bool	Fixed::operator >= (Fixed const &copy) const {
	return (this->_fixedPoint >= copy._fixedPoint);
}

bool   Fixed::operator <= (Fixed const &copy) const {
	return (this->_fixedPoint <= copy._fixedPoint);
}

bool   Fixed::operator == (Fixed const &copy) const {
	return (this->_fixedPoint == copy._fixedPoint);
}

bool   Fixed::operator != (Fixed const &copy) const {
	return (this->_fixedPoint != copy._fixedPoint);
}

Fixed	Fixed::operator + (Fixed const &copy) const {
	Fixed result(this->toFloat() + copy.toFloat());
	return (result);
}

Fixed	Fixed::operator - (Fixed const &copy) const {
	Fixed result(this->toFloat() - copy.toFloat());
	return (result);
}

Fixed	Fixed::operator * (Fixed const &copy) const {
	Fixed result(this->toFloat() * copy.toFloat());
	return (result);
}

Fixed	Fixed::operator / (Fixed const &copy) const {
	Fixed result(this->toFloat() / copy.toFloat());
	return (result);
}

Fixed	Fixed::operator++(int) {
	Fixed temp(*this);
	this->_fixedPoint++;
	return (temp);
}

Fixed	Fixed::operator++() {
	this->_fixedPoint++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed temp(*this);
	this->_fixedPoint--;
	return (temp);
}

Fixed	Fixed::operator--() {
	this->_fixedPoint--;
	return (*this);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	return(a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed	const &Fixed::min(Fixed const &a, Fixed const &b) {
	return(a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	return(a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed	const &Fixed::max(Fixed const &a, Fixed const &b) {
	return(a.getRawBits() < b.getRawBits() ? a : b);
}

int		Fixed::getRawBits() const {
	return (this->_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	this->_fixedPoint = raw;
	return ;
}

float	Fixed::toFloat() const {
	return ((float)this->_fixedPoint / (float)(1 << _fractionalBits));
}

int		Fixed::toInt() const {
	return (this->_fixedPoint >> _fractionalBits);
}

std::ostream &operator << (std::ostream &output, Fixed const &input) {
	output << input.toFloat();
	return (output);
}