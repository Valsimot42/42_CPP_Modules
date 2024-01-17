/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:18:24 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/17 12:44:21 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;   // Forward declaration

class Form {
public:
    Form(std::string name, int gradeToSign, int gradeToExecute);
    Form(const Form &copy);
    Form &operator=(const Form &copy);
    ~Form();
    
    std::string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;

    bool beSigned(Bureaucrat *bureaucrat) const;

private:
    const std::string _name;
    bool _isSigned;
    int _gradeToSign;
    int _gradeToExecute;

class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };

class GradeTooLowException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &output, const Form &input);

#endif