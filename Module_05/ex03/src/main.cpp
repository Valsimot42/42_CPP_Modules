/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:36:35 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/18 14:01:03 by tbolkova         ###   ########.fr       */
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
        Bureaucrat  Alpha("Fratley", 1);
        Intern      someRandomIntern;
        AForm       *form;
        form = someRandomIntern.makeForm("shrubbery creation", "Freya");
        std::cout << yellow << *form << reset << std::endl;

        std::cout << green;
        Alpha.signForm(*form);

        std::cout << green;
        Alpha.executeForm(*form);
        
        std::cout << yellow << *form << std::endl;

        delete form;
    }

    std::cout << blue << "----TEST: ROBOTOMY FORM----" << reset << std::endl;

    {
        Bureaucrat  Alpha("Fratley", 1);
        Intern      someRandomIntern;
        AForm       *form;
        form = someRandomIntern.makeForm("robotomy request", "Freya");
        std::cout << yellow << *form << reset << std::endl;

        std::cout << green;
        Alpha.signForm(*form);
        
        std::cout << green;
        Alpha.executeForm(*form);
        
        std::cout << yellow << *form << std::endl;

        delete form;
    }


    std::cout << blue << "----TEST: PRESIDENTIAL FORM----" << reset << std::endl;

    {
        Bureaucrat  Alpha("Fratley", 1);
        Intern      someRandomIntern;
        AForm       *form;
        form = someRandomIntern.makeForm("presidential pardon", "Freya");
        std::cout << yellow << *form << reset << std::endl;
        
        std::cout << green;
        Alpha.signForm(*form);
        
        std::cout << green;
        Alpha.executeForm(*form);
        
        std::cout << yellow << *form << std::endl;

        delete form;
    }

    std::cout << blue << "----TEST: WRONG FORM----" << reset << std::endl;

    {
        Bureaucrat  Alpha("Fratley", 1);
        Intern      someRandomIntern;
        AForm       *form;
        form = someRandomIntern.makeForm("overtime hours", "Freya");

        delete form;
    }

    return (0);
}