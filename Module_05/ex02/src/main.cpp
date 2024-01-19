/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:36:35 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/18 15:44:41 by tbolkova         ###   ########.fr       */
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
    
    // std::cout << blue << "---TEST: ROBOTOMY FORM----" << reset << std::endl;
    // {
    //     RobotomyRequestForm robo("Black Mage");
    //     RobotomyRequestForm roboUnsigned(robo);

    //     Bureaucrat Alpha("Garland", 1);
    //     Bureaucrat Beta("Kuja", 75);

    //     std::cout << green;
    //     Alpha.signForm(robo);

    //     std::cout << yellow;
    //     Alpha.signForm(robo);
        
    //     try {
    //         std::cout << red;
    //         Beta.signForm(roboUnsigned);
    //     } catch (std::exception &e){
    //         std::cout << e.what() << std::endl;
    //     }
    //     std::cout << reset << std::endl;
    //     try {
    //         std::cout << red;
    //         Beta.executeForm(robo);
    //         std::cout << reset;
    //     } catch (std::exception &e){
    //         std::cout << red << e.what() << std::endl;
    //     }
    //     std::cout << reset << std::endl;

    //     std::cout << yellow;
    //     Alpha.executeForm(roboUnsigned);
    //     std::cout << green << std::endl;
    //     Alpha.executeForm(robo);
    //     std::cout << yellow << robo << reset << std::endl;
    // }

    // std::cout << blue << "---TEST: PARDON FORM----" << reset << std::endl;
    // {
    //     PresidentialPardonForm pardon("Steiner");
    //     PresidentialPardonForm pardonUnsigned(pardon);

    //     Bureaucrat Alpha("Queen Brahne", 1);
    //     Bureaucrat Beta("Beatrix", 29);

    //     std::cout << green;
    //     Alpha.signForm(pardon);

    //     std::cout << yellow;
    //     Alpha.signForm(pardon);
        
    //     try {
    //         std::cout << red;
    //         Beta.signForm(pardonUnsigned);
    //     } catch (std::exception &e){
    //         std::cout << e.what() << std::endl;
    //     }
    //     std::cout << reset << std::endl;
    //     try {
    //         std::cout << red;
    //         Beta.executeForm(pardon);
    //         std::cout << reset;
    //     } catch (std::exception &e){
    //         std::cout << red << e.what() << std::endl;
    //     }
    //     std::cout << reset << std::endl;

    //     std::cout << yellow;
    //     Alpha.executeForm(pardonUnsigned);
    //     std::cout << green << std::endl;
    //     Alpha.executeForm(pardon);
    //     std::cout << yellow << pardon << reset << std::endl;
    // }

    std::cout << blue << "----TEST: ABSTRACT FORM----" << reset << std::endl;
    {
        std::cout << green << "Nothing will show here because abstract classes cannot be compiled." << reset << std::endl;
//        AForm form(); //Will not compile
    }
    return (0);
}