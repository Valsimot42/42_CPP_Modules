/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:23:20 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/22 15:23:20 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string>

class Fixed{
public:
	Fixed();
	Fixed(Fixed const &copy);
	Fixed &operator = (Fixed const &copy);
	~Fixed();

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:
	int					_fixedPoint;
	static const int	_fractionalBits = 8;
};

#endif