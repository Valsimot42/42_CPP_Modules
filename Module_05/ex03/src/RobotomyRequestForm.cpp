/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:32:16 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/19 13:09:47 by tbolkova         ###   ########.fr       */
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
        for(int i = 1; i <= 4; i++) {
            if (i % 2 == 0)
                std::cout << green << "Vrrrrrrrr, robotomy process successful." << std::endl;
            else
                std::cout << red << "Vrrrrrrrr, robotomy process failed." << std::endl;
        }
    }
    else
        std::cout << getTarget() << " has not been able to undergo robotomy process." << std::endl;
}
