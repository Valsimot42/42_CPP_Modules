/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:36:35 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/19 18:06:36 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Intern.hpp"

int main() {
//Shrubbery
    std::cout << blue << "----TEST: SHRUBBERY FORM----" << reset << std::endl;
    
    Intern Puck1;
    AForm* form1;
    form1 = Puck1.makeForm("ShrubberyCreationForm", "Freya");   // Correct
    //form1 = Puck1.makeForm("WrongForm", "Freya");               // Wrong
    //form1 = Puck1.makeForm("", "Freya");                        // Empty

    if (form1 != NULL) {
        std::cout << yellow << *form1 << reset << std::endl;
        
        std::cout << blue << "v----1----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 0);
            Alpha.signForm(*form1);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----2----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 151);
            Alpha.signForm(*form1);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----3----v" << reset << std::endl;
        try {
            std::cout << red;
            Bureaucrat Alpha("Fratley", 150);
            Alpha.signForm(*form1);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----4----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 145);
            std::cout << green;
            Alpha.signForm(*form1);
            std::cout << red;
            Alpha.executeForm(*form1);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----5----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 137);
            std::cout << yellow;
            Alpha.signForm(*form1);
            std::cout << green;
            Alpha.executeForm(*form1);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

    } else {
        std::cerr << red << "Error: Form is NULL-pointer." << reset << std::endl;
    }
    std::cout << std::endl;
    
//Robotomy
    std::cout << blue << "----TEST: ROBOTOMY FORM----" << reset << std::endl;

    Intern Puck2;
    AForm* form2;
    form2 = Puck2.makeForm("RobotomyRequestForm", "Freya");   // Correct
    //form2 = Puck2.makeForm("WrongForm", "Freya");             // Wrong
    //form2 = Puck2.makeForm("", "Freya");                      // Empty

    if (form2 != NULL) {
        std::cout << yellow << *form2 << reset << std::endl;
        
        std::cout << blue << "v----1----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 0);
            Alpha.signForm(*form2);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----2----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 151);
            Alpha.signForm(*form2);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----3----v" << reset << std::endl;
        try {
            std::cout << red;
            Bureaucrat Alpha("Fratley", 80);
            Alpha.signForm(*form2);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----4----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 53);
            std::cout << green;
            Alpha.signForm(*form2);
            std::cout << red;
            Alpha.executeForm(*form2);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----5----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 25);
            std::cout << yellow;
            Alpha.signForm(*form2);
            std::cout << green;
            Alpha.executeForm(*form2);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

    } else {
        std::cerr << red << "Error: Form is NULL-pointer." << reset << std::endl;
    }
    std::cout << std::endl;

//Presidential   
    std::cout << blue << "----TEST: PRESIDENTIAL FORM----" << reset << std::endl;

    Intern Puck3;
    AForm* form3;
    form3 = Puck3.makeForm("PresidentialPardonForm", "Freya");    // Correct
    //form3 = Puck3.makeForm("WrongForm", "Freya");                 // Wrong
    //form3 = Puck3.makeForm("", "Freya");                          // Empty

    if (form3 != NULL) {
        std::cout << yellow << *form3 << reset << std::endl;
        
        std::cout << blue << "v----1----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 0);
            Alpha.signForm(*form3);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----2----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 151);
            Alpha.signForm(*form3);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----3----v" << reset << std::endl;
        try {
            std::cout << red;
            Bureaucrat Alpha("Fratley", 30);
            Alpha.signForm(*form3);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << reset << std::endl;
        }

        std::cout << blue << "v----4----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 9);
            std::cout << green;
            Alpha.signForm(*form3);
            std::cout << red;
            Alpha.executeForm(*form3);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << std::endl;
        }

        std::cout << blue << "v----5----v" << reset << std::endl;
        try {
            Bureaucrat Alpha("Fratley", 1);
            std::cout << yellow;
            Alpha.signForm(*form3);
            std::cout << green;
            Alpha.executeForm(*form3);
        }
        catch (const std::exception& e) {
            std::cout << red << "Exception caught: " << e.what() << std::endl;
        }

    } else {
        std::cerr << red << "Error: Form is NULL-pointer." << reset << std::endl;
    }

    return (0);
}
