/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:49:44 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/17 12:34:56 by tbolkova         ###   ########.fr       */
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

// Overload constructor
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

void Bureaucrat::signForm(Form &form) {
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
		form.beSigned(this);
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &input) {
	out << input.getName() << ", bureaucrat grade " << input.getGrade() << std::endl;
	return (out);
}