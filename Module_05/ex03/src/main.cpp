/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:36:35 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/19 12:43:32 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"

int main() {
    std::cout << blue << "----TEST: SHRUBBERY FORM----" << reset << std::endl;
    {
        Bureaucrat Alpha("Fratley", 1);
        Intern someRandomIntern;
        AForm* form = someRandomIntern.makeForm("ShrubberyCreationForm", "Freya");
        //AForm* form = someRandomIntern.makeForm("", "Freya");
        //AForm* form = someRandomIntern.makeForm("123453345", "Freya");

        if (form != NULL) {
            std::cout << yellow << *form << reset << std::endl;

            std::cout << green;
            Alpha.signForm(*form);

            std::cout << green;
            Alpha.executeForm(*form);

            std::cout << yellow << *form << std::endl;

            delete form;
        }
        else {
            std::cerr << red << "Error: Unable to create the form." << reset << std::endl;
        }
    }

    std::cout << blue << "----TEST: ROBOTOMY FORM----" << reset << std::endl;
    {
        Bureaucrat Alpha("Fratley", 1);
        Intern someRandomIntern;
        AForm* form = someRandomIntern.makeForm("RobotomyRequestForm", "Freya");
        //AForm* form = someRandomIntern.makeForm("", "Freya");
        //AForm* form = someRandomIntern.makeForm("eoruthih", "Freya");

        if (form != NULL) {
            std::cout << yellow << *form << reset << std::endl;

            std::cout << green;
            Alpha.signForm(*form);

            std::cout << green;
            Alpha.executeForm(*form);

            std::cout << yellow << *form << std::endl;

            delete form;
        } else {
            std::cerr << red << "Error: Unable to create the form." << reset << std::endl;
        }
    }

    std::cout << blue << "----TEST: PRESIDENTIAL FORM----" << reset << std::endl;
    {
        Bureaucrat Alpha("Fratley", 1);
        Intern someRandomIntern;
        AForm* form = someRandomIntern.makeForm("PresidentialPardonForm", "Freya");
        //AForm* form = someRandomIntern.makeForm("", "Freya");
        //AForm* form = someRandomIntern.makeForm("a5fjy3o9h", "Freya");

        if (form != NULL) {
            std::cout << yellow << *form << reset << std::endl;

            std::cout << green;
            Alpha.signForm(*form);

            std::cout << green;
            Alpha.executeForm(*form);

            std::cout << yellow << *form << std::endl;

            delete form;
        } else {
            std::cerr << red << "Error: Unable to create the form." << reset << std::endl;
        }
    }

    return (0);
}