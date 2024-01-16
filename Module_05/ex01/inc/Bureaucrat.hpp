/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 12:50:02 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/16 15:56:48 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Color.hpp"


class Bureaucrat {
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat &operator=(const Bureaucrat &copy);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();


private:
	const std::string _name;
	int _grade;


class GradeTooHighException : public std::exception {
	public:
		virtual const char *what() const throw();
	};

class GradeTooLowException : public std::exception {
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &input);

#endif