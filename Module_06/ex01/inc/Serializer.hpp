/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:03:55 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/29 14:51:52 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <cstdint>
#include <string>
#include <stdint.h>
#include "../inc/Colors.hpp"

typedef struct Data {
    std::string name;
    int age;
}Data;

class Serializer {
private:
    
public:
    Serializer();
    Serializer(Serializer const &serial);
    ~Serializer();
    Serializer &operator=(Serializer const &serial);
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
    
};

#endif