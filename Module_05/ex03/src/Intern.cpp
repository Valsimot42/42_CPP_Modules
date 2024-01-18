/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:53:01 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/18 13:49:45 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &copy) {*this = copy;}

Intern &Intern::operator=(Intern const &copy) {
    (void) copy;
    return (*this);
}

Intern::~Intern() {}

AForm *Intern::createNewPresidentialPardonForm(std::string target) {
    return (new PresidentialPardonForm(target));
}

AForm *Intern::createNewRobotomyRequestForm(std::string target) {
    return (new RobotomyRequestForm(target));
}

AForm *Intern::createNewShrubberyCreationForm(std::string target) {
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::makeForm(std::string form, std::string target) {
    std::string formIndex[] =
    {
    "presidential pardon",
    "robotomy request",
    "shrubbery creation"
    };
    AForm *(Intern:: *formProduction[])(std::string target) =
    {
            &Intern::createNewPresidentialPardonForm,
            &Intern::createNewRobotomyRequestForm,
            &Intern::createNewShrubberyCreationForm
    };
    for (int i = 0; i < 3; i++) {
        if (formIndex[i] == form) {
            std::cout << green << "Puck creates one " << form << " form." << reset << std::endl;
            return (this->*formProduction[i])(target);
        }
    }
    std::cout << red << "Puck could not find the requested form. Available forms are: "
                 "<shrubbery creation>, <robotomy request> and <presidential pardon>."
                 << reset << std::endl;
    return (NULL);
}