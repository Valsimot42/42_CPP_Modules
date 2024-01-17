/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 10:29:53 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/17 10:48:14 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm {
public:
    AForm(std::string name, int gradeToSign, int gradeToExecute);
    AForm(const AForm &copy);
    AForm &operator=(const AForm &copy);
    ~AForm();

    std::string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;

    bool beSigned(Bureaucrat *bureaucrat) const;

    void execute (Bureaucrat const &executor) const;

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

std::ostream &operator<<(std::ostream &output, const AForm &input);

#endif