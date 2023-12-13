/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 09:58:18 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/25 09:58:18 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(int const number);
	Fixed(float const number);
	Fixed(Fixed const &copy);
	Fixed &operator = (Fixed const &copy);
	~Fixed();

	bool	operator > (Fixed const &copy) const;
	bool	operator < (Fixed const &copy) const;
	bool	operator >= (Fixed const &copy) const;
	bool	operator <= (Fixed const &copy) const;
	bool	operator == (Fixed const &copy) const;
	bool	operator != (Fixed const &copy) const;

	Fixed	operator + (Fixed const &copy) const;
	Fixed	operator - (Fixed const &copy) const;
	Fixed	operator * (Fixed const &copy) const;
	Fixed	operator / (Fixed const &copy) const;

	Fixed	operator++(int);
	Fixed	operator ++ ();
	Fixed	operator--(int);
	Fixed	operator -- ();

	static	Fixed &min(Fixed &a, Fixed &b);
	static	Fixed const &min(Fixed const &a, Fixed const &b);
	static	Fixed &max(Fixed &a, Fixed &b);
	static	Fixed const &max(Fixed const &a, Fixed const &b);

	void	setRawBits(int const raw);
	int		getRawBits() const;
	float	toFloat() const;
	int		toInt() const;

private:
	int					_fixedPoint;
	static const int	_fractionalBits = 8;
};

std::ostream &operator << (std::ostream &output, Fixed const &input);

#endif