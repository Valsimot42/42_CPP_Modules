/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:36:35 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/20 12:37:10 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main() {
//Quick Tests
    std::cout << blue << "---TEST: QUICK TESTS----" << reset << std::endl;
    {
        try {
            ShrubberyCreationForm Form1("Test1");
        
            Bureaucrat Test1("Test1", 0);

            Test1.signForm(Form1);
            Test1.executeForm(Form1);
        }
        catch (std::exception &e){
            std::cout << red << e.what() << reset << std::endl;
        }

        try {
            RobotomyRequestForm Form2("Test2");
            
            Bureaucrat Test2("Test2", 151);

            Test2.signForm(Form2);
            Test2.executeForm(Form2);
        }
        catch (std::exception &e){
            std::cout << red << e.what() << reset << std::endl;
        }        
    }
//Shrubbery
    std::cout << blue << "---TEST: SHRUBBERY FORM----" << reset << std::endl;
    {

        ShrubberyCreationForm shrub1("Cleyra");
        ShrubberyCreationForm shrub2("Iifa");
        ShrubberyCreationForm shrub3("Evil Forest");

        std::cout << yellow << shrub1 << reset << std::endl;
        
        Bureaucrat Alpha("Freya", 75);
        Bureaucrat Beta("Fratley", 140);
        Bureaucrat Gamma("Puck", 150);

        std::cout << blue << "v---1---v" << reset << std::endl;

        try {
            Alpha.signForm(shrub1);

            Alpha.executeForm(shrub1);

            Beta.signForm(shrub2);

            Beta.executeForm(shrub2);

            Gamma.signForm(shrub3);

            Gamma.executeForm(shrub3);
        } 
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }

        std::cout << blue << "v---2---v" << reset << std::endl;

        try {
            Alpha.signForm(shrub1);

            Beta.signForm(shrub1);

            Gamma.signForm(shrub1);

            Alpha.executeForm(shrub1);

            Beta.executeForm(shrub1);

            Gamma.executeForm(shrub1);
        } 
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
    
//Robotomy
    std::cout << blue << "---TEST: ROBOTOMY FORM----" << reset << std::endl;
    {
        RobotomyRequestForm robot1("Black Waltz 1");
        RobotomyRequestForm robot2("Black Waltz 2");
        RobotomyRequestForm robot3("Black Waltz 3");

        std::cout << yellow << robot1 << reset << std::endl;
        
        Bureaucrat Delta("Kuja", 24);
        Bureaucrat Epsilon("Zorn", 60);
        Bureaucrat Zeta("Thorn", 150);

        std::cout << blue << "v---1---v" << reset << std::endl;

        try {
            Delta.signForm(robot1);

            Delta.executeForm(robot1);

            Epsilon.signForm(robot2);

            Epsilon.executeForm(robot2);

            Zeta.signForm(robot3);

            Zeta.executeForm(robot3);
        } 
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }

        std::cout << blue << "v---2---v" << reset << std::endl;

        try {
            Delta.signForm(robot1);

            Epsilon.signForm(robot1);

            Zeta.signForm(robot1);

            Delta.executeForm(robot1);

            Epsilon.executeForm(robot1);

            Zeta.executeForm(robot1);
        } 
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

//Presidential
    std::cout << blue << "---TEST: PARDON FORM----" << reset << std::endl;
    {
        PresidentialPardonForm pardon1("Zidane");
        PresidentialPardonForm pardon2("Garnet");
        PresidentialPardonForm pardon3("Vivi");

        std::cout << yellow << pardon1 << reset << std::endl;
        
        Bureaucrat Eta("Cid", 1);
        Bureaucrat Theta("The King", 24);
        Bureaucrat Iota("Queen Brahne", 150);

        std::cout << blue << "v---1---v" << reset << std::endl;

        try {
            Eta.signForm(pardon1);

            Eta.executeForm(pardon1);

            Theta.signForm(pardon2);

            Theta.executeForm(pardon2);

            Iota.signForm(pardon3);

            Iota.executeForm(pardon3);
        } 
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }

        std::cout << blue << "v---2---v" << reset << std::endl;

        try {
            Eta.signForm(pardon1);

            Theta.signForm(pardon1);

            Iota.signForm(pardon1);

            Eta.executeForm(pardon1);

            Theta.executeForm(pardon1);

            Iota.executeForm(pardon1);
        } 
        catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }

//Abstract
    std::cout << blue << "----TEST: ABSTRACT FORM----" << reset << std::endl;
    {
        std::cout << green << "Nothing will show here because abstract classes cannot be compiled." << reset << std::endl;
        //AForm form(); //Will not compile
    }
    return (0);
}