/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:49:44 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/19 16:27:30 by tbolkova         ###   ########.fr       */
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
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
}

void Bureaucrat::signForm(AForm &form) {
	if (form.getIsSigned()) {
		std::cout << "Form " << form.getName() << " is already signed." << std::endl;
		return ;
	}
	if (getGrade() > form.getSignGrade()) {
		std::cout << "Form " << form.getName() << " cannot be signed. Grade too low." << std::endl;
		return ;
	}
	else {
		std::cout << "Form " << form.getName() << " is signed." << std::endl;
		form.beSigned(*this);
	}
}

void Bureaucrat::executeForm(AForm &form) {
    if (!form.getIsSigned()) {
        std::cout << "This form is not signed yet." << std::endl;
    }
    else if (_grade <= form.getExecuteGrade()) {
        std::cout << _name << " executed " << form.getName() << "." << std::endl;
		form.beExecuted(*this);
    } else {
        std::cout << _name << " could not execute " << form.getName() <<
                  ". Clearance level is not high enough." << std::endl;
    }
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &input) {
	out << input.getName() << ", bureaucrat grade " << input.getGrade() << std::endl;
	return (out);
}