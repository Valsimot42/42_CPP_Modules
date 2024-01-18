/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:45:29 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/18 13:09:56 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
public:
    Intern();
    Intern(Intern const &copy);
    Intern &operator=(Intern const &copy);
    ~Intern();

    AForm *createNewPresidentialPardonForm(std::string target);
    AForm *createNewRobotomyRequestForm(std::string target);
    AForm *createNewShrubberyCreationForm(std::string target);

    AForm *makeForm(std::string form, std::string target);
};

#endif