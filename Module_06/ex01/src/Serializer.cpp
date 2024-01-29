/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:04:19 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/29 13:40:38 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"

Serializer::Serializer(){}


Serializer::Serializer(Serializer const &serial){
	*this = serial;
}

Serializer::~Serializer() {}

Serializer	&Serializer::operator=(Serializer const &serial)
{
	*this = serial;
	return *this;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t convert = reinterpret_cast<uintptr_t>(ptr);
	return convert;
}

Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*convert = reinterpret_cast<Data*>(raw);
	return convert;
}