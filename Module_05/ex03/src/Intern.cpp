/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:53:01 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/19 16:42:51 by tbolkova         ###   ########.fr       */
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
    try {

        if (form.empty()) {
            throw std::invalid_argument("Puck is confused. Form name is empty.");
        }

        std::string forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
        AForm* (Intern::*func[]) (std::string) = {&Intern::createNewPresidentialPardonForm, &Intern::createNewRobotomyRequestForm, &Intern::createNewShrubberyCreationForm};

        for (int i = 0; i < 3; i++) {
            if (form == forms[i]) {
                std::cout << green << "Puck creates " << form << reset << std::endl;
                return (this->*func[i])(target);
            }
        }
        throw std::invalid_argument("Puck cannot create the form. Invalid form name.");
    } catch (const std::invalid_argument& e) {
        std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        return (NULL);
    }
}
