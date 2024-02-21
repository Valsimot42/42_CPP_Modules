/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:46:36 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/21 11:07:29 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include "Colors.hpp"

    void checkInput(std::string& input);
    void checkBlock(std::string& block);
    void run(std::string& input);
    void arithmetic(std::stack<int>& Stack, std::string& block, int& result);

#endif