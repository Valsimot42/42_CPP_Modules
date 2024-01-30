/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:03:55 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/30 15:26:25 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <cstdint>
#include <string>
#include <stdint.h>
#include <iostream>
#include "../inc/Colors.hpp"

typedef struct Data {
    std::string name;
    int age;
}Data;

class Serializer {
private:
    Serializer();
    Serializer(Serializer const &serial);
    
public:
    ~Serializer();
    Serializer &operator=(Serializer const &serial);
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    
};

#endif