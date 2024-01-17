/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:32:16 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/17 16:34:00 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

// Constructor
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45, target) {
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) {
    *this = copy;
    return ;
}

// Overload operator
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
    setIsSigned(copy.getIsSigned());
    setTarget(copy.getTarget());
    return (*this);
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm() {
    return ;
}

void RobotomyRequestForm::beExecuted(Bureaucrat const &bureaucrat) {
    if (!getIsSigned()) {
        std::cout << "This form is not yet signed." << std::endl;
        return ;
    }
    if (bureaucrat.getGrade() <= 45) {
        std::cout << "Brrrrrr " << getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
    }
    else
        std::cout << "Brrrrrr " << getTarget() << " has not been robotomized successfully." << std::endl;
}
