/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:18:24 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/20 12:48:51 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;   // Forward declaration

class AForm {
public:
    AForm(std::string name, int gradeToSign, int gradeToExecute, std::string target);
    AForm(const AForm &copy);
    AForm &operator=(const AForm &copy);
    virtual ~AForm();
    
    std::string getName() const;
    bool getIsSigned() const;
    int getSignGrade() const;
    int getExecuteGrade() const;
    std::string getTarget() const;

    void                setIsSigned(bool boolean);
    void                setTarget(std::string target);

    void beSigned(Bureaucrat const &bureaucrat);

    virtual void beExecuted(Bureaucrat const &bureaucrat) const = 0;

class GradeTooHighException : public std::exception {
    public:
        const char *what() const throw();
    };

class GradeTooLowException : public std::exception {
    public:
        const char *what() const throw();
    };

private:
    const std::string _name;
    bool _isSigned;
    const int _gradeToSign;
    const int _gradeToExecute;
    std::string _target;
    
};

std::ostream &operator<<(std::ostream &output, const AForm &input);

#endif