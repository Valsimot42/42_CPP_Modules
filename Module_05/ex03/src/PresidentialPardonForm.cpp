/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:59:19 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/17 16:35:55 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"

// Constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5, target) {
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy) {
    *this = copy;
    return ;
}

// Overload operator
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
    setIsSigned(copy.getIsSigned());
    setTarget(copy.getTarget());
    return (*this);
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm() {
    return ;
}

void PresidentialPardonForm::beExecuted(Bureaucrat const &bureaucrat) {
    if (!getIsSigned()) {
        std::cout << "This form is not yet signed." << std::endl;
        return ;
    }
    if (bureaucrat.getGrade() <= 5) {
        std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
    }
    else
        std::cout << "Zafod Beeblebrox is not here to pardon " << getTarget() << "." << std::endl;
}
