/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:53:01 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/19 12:36:49 by tbolkova         ###   ########.fr       */
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

// AForm *Intern::makeForm(std::string form, std::string target) {
//     if (form.empty())
//         throw (std::runtime_error("Form name is empty."));
//     std::string formIndex[] =
//     {
//     "presidential pardon",
//     "robotomy request",
//     "shrubbery creation"
//     };
//     AForm *(Intern:: *formProduction[])(std::string target) =
//     {
//             &Intern::createNewPresidentialPardonForm,
//             &Intern::createNewRobotomyRequestForm,
//             &Intern::createNewShrubberyCreationForm
//     };
//     int i;
//     for (i = 0; i < 3; i++) {
//         if (formIndex[i] == form) {
//             std::cout << "Found matching form: " << formIndex[i] << std::endl;
//             std::cout << green << "Puck creates one " << form << " form." << reset << std::endl;
//             return (this->*formProduction[i])(target);
//             // std::cout << green << "Puck creates one " << form << " form." << reset << std::endl;
//             // return (this->*formProduction[i])(target);
//         }
//     }
//     if (i == 3)0
//         throw (std::runtime_error("Puck could not find the requested form. Available forms are: "
//                                   "<shrubbery creation>, <robotomy request> and <presidential pardon>."));
//     return (NULL);
// }

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
        return NULL;
    }
}
