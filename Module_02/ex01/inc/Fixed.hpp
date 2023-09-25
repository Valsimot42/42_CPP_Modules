/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:42:31 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/23 13:42:31 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed{
public:
	Fixed();
	Fixed(int const number);
	Fixed(float const number);
	Fixed(Fixed const &copy);
	Fixed &operator = (Fixed const &copy);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;

private:
	int					_fixedPoint;
	static const int	_fractionalBits = 8;
};

std::ostream &operator << (std::ostream &output, Fixed const &input);

#endif