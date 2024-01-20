/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:49:44 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/20 12:51:34 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

// Constructor
Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy._name) {
	*this = copy;
	return ;
}

// Overload operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy) {
	_grade = copy._grade;
	return (*this);
}

// Destructor
Bureaucrat::~Bureaucrat() {
	return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::string Bureaucrat::getName() const {
	return (_name);
}

int Bureaucrat::getGrade() const {
	return (_grade);
}

void Bureaucrat::incrementGrade() {
	_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
	_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm &form) {
	if (getGrade() > form.getSignGrade()) {
		std::cout << red << "Form " << form.getName() << " cannot be signed. Grade too low." << reset << std::endl;
	}
	else if (form.getIsSigned()) {
		std::cout << yellow << "Form " << form.getName() << " is already signed." << reset << std::endl;
	}
	else {
		std::cout << green << "Form " << form.getName() << " is signed." << reset << std::endl;
		form.beSigned(*this);
	}
}

void Bureaucrat::executeForm(AForm &form) {
    if (!form.getIsSigned()) {
        std::cout << yellow << "This form is not signed yet." << reset << std::endl;
    }
    else if (_grade <= form.getExecuteGrade()) {
        std::cout << green << _name << " executed " << form.getName() << "." << reset << std::endl;
		form.beExecuted(*this);
    } else {
        std::cout << red << _name << " could not execute " << form.getName() <<
                  ". Clearance level is not high enough." << reset << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &input) {
	out << input.getName() << ", bureaucrat grade " << input.getGrade() << std::endl;
	return (out);
}