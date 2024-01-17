/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:36:35 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/17 17:56:24 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main() {

    std::cout << blue << "---TEST: SHRUBBERY FORM----" << reset << std::endl;
    {
        ShrubberyCreationForm shrub("Cleyra");
        ShrubberyCreationForm shrubUnsigned("Iifa");

        Bureaucrat Alpha("Freya", 75);
        Bureaucrat Beta("Puck", 150);

        std::cout << green;
        Alpha.signForm(shrub);
        
        std::cout << yellow;
        Alpha.signForm(shrub);
        
        try {
            std::cout << red;
            Beta.signForm(shrubUnsigned);
        } catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << reset << std::endl;
        try {
            std::cout << red;
            Beta.executeForm(shrub);
            std::cout << reset;
        } catch (std::exception &e){
            std::cout << red << e.what() << std::endl;
        }
        std::cout << reset << std::endl;

        std::cout << yellow;
        Alpha.executeForm(shrubUnsigned);
        std::cout << green << std::endl;
        Alpha.executeForm(shrub);
        std::cout << yellow << shrub << reset << std::endl;
    }
    
    std::cout << blue << "---TEST: ROBOTOMY FORM----" << reset << std::endl;
    {
        RobotomyRequestForm robo("Black Mage");
        RobotomyRequestForm roboUnsigned(robo);

        Bureaucrat Alpha("Garland", 1);
        Bureaucrat Beta("Kuja", 75);

        std::cout << green;
        Alpha.signForm(robo);

        std::cout << yellow;
        Alpha.signForm(robo);
        
        try {
            std::cout << red;
            Beta.signForm(roboUnsigned);
        } catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << reset << std::endl;
        try {
            std::cout << red;
            Beta.executeForm(robo);
            std::cout << reset;
        } catch (std::exception &e){
            std::cout << red << e.what() << std::endl;
        }
        std::cout << reset << std::endl;

        std::cout << yellow;
        Alpha.executeForm(roboUnsigned);
        std::cout << green << std::endl;
        Alpha.executeForm(robo);
        std::cout << yellow << robo << reset << std::endl;
    }

    std::cout << blue << "---TEST: ROBOTOMY FORM----" << reset << std::endl;
    {
        PresidentialPardonForm pardon("James Sunderland");
        PresidentialPardonForm pardonUnsigned(pardon);

        Bureaucrat bossMan("Boss", 1);
        Bureaucrat middleMan("Mid", 75);

        bossMan.signForm(pardon);
        bossMan.signForm(pardon);
        try {
            middleMan.signForm(pardonUnsigned);
        } catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        try {
            middleMan.executeForm(pardon);
        } catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;

        bossMan.executeForm(pardonUnsigned);
        std::cout << std::endl;
        bossMan.executeForm(pardon);
        std::cout << pardon << std::endl;
    }





    

  
    std::cout << "// PRESIDENTIAL PARDON FORM //" << std::endl;
    {
        PresidentialPardonForm pardon("James Sunderland");
        PresidentialPardonForm pardonUnsigned(pardon);

        Bureaucrat bossMan("Boss", 1);
        Bureaucrat middleMan("Mid", 75);

        bossMan.signForm(pardon);
        bossMan.signForm(pardon);
        try {
            middleMan.signForm(pardonUnsigned);
        } catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        try {
            middleMan.executeForm(pardon);
        } catch (std::exception &e){
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;

        bossMan.executeForm(pardonUnsigned);
        std::cout << std::endl;
        bossMan.executeForm(pardon);
        std::cout << pardon << std::endl;
    }
    std::cout << "// ABSTRACT AFORM //" << std::endl;
    {
//        AForm form(); //Will not compile
    }
    return (0);
}