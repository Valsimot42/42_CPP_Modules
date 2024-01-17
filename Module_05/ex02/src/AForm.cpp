/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:18:14 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/17 13:00:07 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

// Constructor
AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
_isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

// Copy constructor
AForm::AForm(const AForm &copy)  : _name(copy._name), _isSigned(copy._isSigned),
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
    *this = copy;
    return ;
}

// Overload constructor
AForm &AForm::operator=(const AForm &copy) {
    _isSigned = copy._isSigned;
    return (*this);
}

// Destructor
AForm::~AForm() {
    return ;
}

std::string AForm::getName() const {
    return (_name);
}

bool AForm::getIsSigned() const {
    return (_isSigned);
}

int AForm::getSignGrade() const {
    return (_gradeToSign);
}

int AForm::getExecuteGrade() const {
    return (_gradeToExecute);
}

void AForm::beSigned(Bureaucrat const &bureaucrat) {
    if (_isSigned) {
        std::cout << "This form is already signed." << std::endl;
        return;
    }
    if (bureaucrat.getGrade() <= _gradeToSign)
        _isSigned = true;
    else
        throw AForm::GradeTooLowException();
}

const char *AForm::GradeTooHighException::what() const throw() {
    return ("Form cannot be signed. Grade too high.");
}

const char *AForm::GradeTooLowException::what() const throw() {
    return ("Form cannot be signed. Grade too low.");
}

std::ostream &operator<<(std::ostream &out, const AForm &input) {
    out << "Form " << input.getName() << " is ";
    if (input.getIsSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << input.getSignGrade() << " to sign and grade "
    << input.getExecuteGrade() << " to execute." << std::endl;
    return (out);
}