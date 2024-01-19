/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 14:05:07 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/18 17:09:06 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

// Constructor
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137, target) {
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy) {
    *this = copy;
    return ;
}

// Overload operator
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
    setIsSigned(copy.getIsSigned());
    setTarget(copy.getTarget());
    return (*this);
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {
    return ;
}

void ShrubberyCreationForm::beExecuted(Bureaucrat const &bureaucrat) {
    if (!getIsSigned()) {
        std::cout << "This form is not yet signed." << std::endl;
        return ;
    }
    if (bureaucrat.getGrade() <= getExecuteGrade()) {
        std::ofstream outfile((getTarget() + "_shrubbery").c_str());
        outfile <<
                "            # #### ####\n"
                "        ### \\/#|### |/####\n"
                "        ##\\/#/ \\||/##/_/##/_#\n"
                "       ###  \\/###|/ \\/ # ###\n"
                "    ##_\\_#\\_\\## | #/###_/_####\n"
                "    ## #### # \\ #| /  #### ##/##\n"
                "    __#_--###`  |{,###---###-~\n"
                "                \\ }{\n"
                "                }}{\n"
                "                }}{\n"
                "       		 {{}\n"
                "        , -=-~{ .-^- _\n"
                "                `}\n"
                "                 {"
                << std::endl;
        outfile.close();
    }
    else
        throw AForm::GradeTooLowException();
}
