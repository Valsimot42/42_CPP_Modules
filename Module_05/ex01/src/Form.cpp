/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:18:14 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/17 12:20:39 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"

// Constructor
Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
_isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

// Copy constructor
Form::Form(const Form &copy)  : _name(copy._name), _isSigned(copy._isSigned),
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
    *this = copy;
    return ;
}

// Overload constructor
Form &Form::operator=(const Form &copy) {
    _isSigned = copy._isSigned;
    return (*this);
}

// Destructor
Form::~Form() {
    return ;
}

std::string Form::getName() const {
    return (_name);
}

bool Form::getIsSigned() const {
    return (_isSigned);
}

int Form::getSignGrade() const {
    return (_gradeToSign);
}

int Form::getExecuteGrade() const {
    return (_gradeToExecute);
}

bool Form::beSigned(Bureaucrat *bureaucrat) const {
    if (_isSigned) {
        std::cout << "Form " << _name << " is already signed." << std::endl;
        return (false);
    }
    if (bureaucrat->getGrade() > _gradeToSign)
        return (false);
    else
        return (true);
}

const char *Form::GradeTooHighException::what() const throw() {
    return ("Form cannot be signed. Grade too high.");
}

const char *Form::GradeTooLowException::what() const throw() {
    return ("Form cannot be signed. Grade too low.");
}

std::ostream &operator<<(std::ostream &out, const Form &input) {
    out << "Form " << input.getName() << " is ";
    if (input.getIsSigned())
        out << "signed";
    else
        out << "not signed";
    out << " and requires grade " << input.getSignGrade() << " to sign and grade "
    << input.getExecuteGrade() << " to execute." << std::endl;
    return (out);
}