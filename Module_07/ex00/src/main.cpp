/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:21:45 by tbolkova          #+#    #+#             */
/*   Updated: 2024/01/31 15:31:23 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/whatever.hpp"

// int main(void) {
//     std::cout << "--- TEST FROM SUBJECT ---" << std::endl;
//     int a = 10;
//     int b = 15;
    
//     ::swap(a, b);
//     std::cout << BOLDGREEN << "a = " << a << ", b = " << b << RESET << std::endl;
//     std::cout << BOLDBLUE << "min( a, b ) = " << ::min( a, b ) << RESET << std::endl;
//     std::cout << BOLDBLUE << "max( a, b ) = " << ::max( a, b ) << RESET << std::endl;

//     std::string c = "chaine1";
//     std::string d = "chaine2";

//     std::cout << std::endl;

//     ::swap(c, d);
//     std::cout << BOLDGREEN << "c = " << c << ", d = " << d << RESET << std::endl;
//     std::cout << BOLDBLUE << "min( c, d ) = " << ::min( c, d ) << RESET << std::endl;
//     std::cout << BOLDBLUE << "max( c, d ) = " << ::max( c, d ) << RESET << std::endl;
    
//     return 0;
// }

int main(void) {

    std::cout << BOLDMAGENTA << "--- TEST SELECTOR ---" << RESET << std::endl;
    std::cout << "Select a test case:\n";
    std::cout << "1. Int Tests\n";
    std::cout << "2. Char Tests\n";
    std::cout << "3. Float Tests\n";
    std::cout << "4. Double Tests\n";
    std::cout << "5. String Tests\n";
    std::cout << "6. Help\n";
    std::cout << "7. Exit\n";

    while(true) {

    int choice;
    std::cout << "Enter your choice (1, 2, 3, 4, 5, 6 or 7): ";
    std::cin >> choice;

    switch (choice) {
        case 1:{
            std::cout << BOLDMAGENTA << "--- INT TESTS ---" << RESET <<  std::endl;
               
            int int_1 = 5;
            int int_2 = 10;
    
            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "int_1 = " << int_1 << ", int_2 = " << int_2 << RESET << std::endl;
            ::swap(int_1, int_2); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "int_1 = " << int_1 << ", int_2 = " << int_2 << RESET << std::endl;
            
            std::cout << BOLDBLUE << "min( int_1, int_2 ) = " << ::min( int_1, int_2 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( int_1, int_2 ) = " << ::max( int_1, int_2 ) << RESET << std::endl;

            std::cout << std::endl;

            int int_3 = 10;
            int int_4 = -10;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "int_3 = " << int_3 << ", int_4 = " << int_4 << RESET << std::endl;
            ::swap(int_3, int_4); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "int_3 = " << int_3 << ", int_4 = " << int_4 << RESET << std::endl;
            
            std::cout << BOLDBLUE << "min( int_3, int_4 ) = " << ::min( int_3, int_4 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( int_3, int_4 ) = " << ::max( int_3, int_4 ) << RESET << std::endl;

            std::cout << std::endl;

            int int_5 = 10;
            int int_6 = 10;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "int_5 = " << int_5 << ", int_6 = " << int_6 << RESET << std::endl;
            ::swap(int_5, int_6); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "int_5 = " << int_5 << ", int_6 = " << int_6 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( int_5, int_6 ) = " << ::min( int_5, int_6 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( int_5, int_6 ) = " << ::max( int_5, int_6 ) << RESET << std::endl;

            std::cout << std::endl;
            break;
        }
        case 2:{
            std::cout << BOLDMAGENTA << "--- CHAR TESTS ---" << RESET <<  std::endl;

            char char_1 = 'a';
            char char_2 = 'b';

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "char_1 = " << char_1 << ", char_2 = " << char_2 << RESET << std::endl;
            ::swap(char_1, char_2); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "char_1 = " << char_1 << ", char_2 = " << char_2 << RESET << std::endl;
            
            std::cout << BOLDBLUE << "min( char_1, char_2 ) = " << ::min( char_1, char_2 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( char_1, char_2 ) = " << ::max( char_1, char_2 ) << RESET << std::endl;

            std::cout << std::endl;

            char char_3 = 'a';
            char char_4 = 'A';

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "char_3 = " << char_3 << ", char_4 = " << char_4 << RESET << std::endl;
            ::swap(char_3, char_4); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "char_3 = " << char_3 << ", char_4 = " << char_4 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( char_3, char_4 ) = " << ::min( char_3, char_4 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( char_3, char_4 ) = " << ::max( char_3, char_4 ) << RESET << std::endl;

            std::cout << std::endl;

            char char_5 = 'a';
            char char_6 = 'a';

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "char_5 = " << char_5 << ", char_6 = " << char_6 << RESET << std::endl;
            ::swap(char_5, char_6); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "char_5 = " << char_5 << ", char_6 = " << char_6 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( char_5, char_6 ) = " << ::min( char_5, char_6 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( char_5, char_6 ) = " << ::max( char_5, char_6 ) << RESET << std::endl;

            std::cout << std::endl;
            break;
        }
        case 3:{
            std::cout << BOLDMAGENTA << "--- FLOAT TESTS ---" << RESET <<  std::endl;

            float float_1 = 5.5f;
            float float_2 = 10.5f;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "float_1 = " << float_1 << ", float_2 = " << float_2 << RESET << std::endl;
            ::swap(float_1, float_2); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "float_1 = " << float_1 << ", float_2 = " << float_2 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( float_1, float_2 ) = " << ::min( float_1, float_2 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( float_1, float_2 ) = " << ::max( float_1, float_2 ) << RESET << std::endl;

            std::cout << std::endl;

            float float_3 = 17.5f;
            float float_4 = -3.9f;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "float_3 = " << float_3 << ", float_4 = " << float_4 << RESET << std::endl;
            ::swap(float_3, float_4); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "float_3 = " << float_3 << ", float_4 = " << float_4 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( float_3, float_4 ) = " << ::min( float_3, float_4 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( float_3, float_4 ) = " << ::max( float_3, float_4 ) << RESET << std::endl;

            std::cout << std::endl;

            float float_5 = 20.3f;
            float float_6 = 20.7f;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "float_5 = " << float_5 << ", float_6 = " << float_6 << RESET << std::endl;
            ::swap(float_5, float_6); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "float_5 = " << float_5 << ", float_6 = " << float_6 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( float_5, float_6 ) = " << ::min( float_5, float_6 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( float_5, float_6 ) = " << ::max( float_5, float_6 ) << RESET << std::endl;

            std::cout << std::endl;

            float float_7 = 4.20f;
            float float_8 = 4.20f;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "float_7 = " << float_7 << ", float_8 = " << float_8 << RESET << std::endl;
            ::swap(float_7, float_8); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "float_7 = " << float_7 << ", float_8 = " << float_8 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( float_7, float_8 ) = " << ::min( float_7, float_8 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( float_7, float_8 ) = " << ::max( float_7, float_8 ) << RESET << std::endl;

            std::cout << std::endl;
            break;
        }
        case 4:{
            std::cout << BOLDMAGENTA << "--- DOUBLE TESTS ---" << RESET <<  std::endl;

            double double_1 = 5.5;
            double double_2 = 10.5;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "double_1 = " << double_1 << ", double_2 = " << double_2 << RESET << std::endl;
            ::swap(double_1, double_2); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "double_1 = " << double_1 << ", double_2 = " << double_2 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( double_1, double_2 ) = " << ::min( double_1, double_2 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( double_1, double_2 ) = " << ::max( double_1, double_2 ) << RESET << std::endl;

            std::cout << std::endl;

            double double_3 = 17.5;
            double double_4 = -3.9;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "double_3 = " << double_3 << ", double_4 = " << double_4 << RESET << std::endl;
            ::swap(double_3, double_4); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "double_3 = " << double_3 << ", double_4 = " << double_4 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( double_3, double_4 ) = " << ::min( double_3, double_4 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( double_3, double_4 ) = " << ::max( double_3, double_4 ) << RESET << std::endl;

            std::cout << std::endl;

            double double_5 = 20.3;
            double double_6 = 20.7;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "double_5 = " << double_5 << ", double_6 = " << double_6 << RESET << std::endl;
            ::swap(double_5, double_6); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "double_5 = " << double_5 << ", double_6 = " << double_6 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( double_5, double_6 ) = " << ::min( double_5, double_6 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( double_5, double_6 ) = " << ::max( double_5, double_6 ) << RESET << std::endl;

            std::cout << std::endl;

            double double_7 = 6.9;
            double double_8 = 6.9;

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "double_7 = " << double_7 << ", double_8 = " << double_8 << RESET << std::endl;
            ::swap(double_7, double_8); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "double_7 = " << double_7 << ", double_8 = " << double_8 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( double_7, double_8 ) = " << ::min( double_7, double_8 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( double_7, double_8 ) = " << ::max( double_7, double_8 ) << RESET << std::endl;

            std::cout << std::endl;
            break;
        }
        case 5:{
            std::cout << BOLDMAGENTA << "--- STRING TESTS ---" << RESET <<  std::endl;

            std::string string_1 = "Hello";
            std::string string_2 = "World";

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "string_1 = " << string_1 << ", string_2 = " << string_2 << RESET << std::endl;
            ::swap(string_1, string_2); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "string_1 = " << string_1 << ", string_2 = " << string_2 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( string_1, string_2 ) = " << ::min( string_1, string_2 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( string_1, string_2 ) = " << ::max( string_1, string_2 ) << RESET << std::endl;

            std::cout << std::endl;
            
            std::string string_3 = "Tomato";
            std::string string_4 = "TOMATO";

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "string_3 = " << string_3 << ", string_4 = " << string_4 << RESET << std::endl;
            ::swap(string_3, string_4); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "string_3 = " << string_3 << ", string_4 = " << string_4 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( string_3, string_4 ) = " << ::min( string_3, string_4 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( string_3, string_4 ) = " << ::max( string_3, string_4 ) << RESET << std::endl;

            std::cout << std::endl;

            std::string string_5 = "Final Fantasy";
            std::string string_6 = "Final Fantasy";

            std::cout << BOLDCYAN << "Before swap: ";
            std::cout << BOLDYELLOW << "string_5 = " << string_5 << ", string_6 = " << string_6 << RESET << std::endl;
            ::swap(string_5, string_6); std::cout << BOLDCYAN << "After swap: ";
            std::cout << BOLDYELLOW << "string_5 = " << string_5 << ", string_6 = " << string_6 << RESET << std::endl;

            std::cout << BOLDBLUE << "min( string_5, string_6 ) = " << ::min( string_5, string_6 ) << RESET << std::endl;
            std::cout << BOLDBLUE << "max( string_5, string_6 ) = " << ::max( string_5, string_6 ) << RESET << std::endl;

            std::cout << std::endl;
            break;
        }
        case 6:{
                std::cout << "Select a test case:\n";
                std::cout << "1. Int Tests\n";
                std::cout << "2. Char Tests\n";
                std::cout << "3. Float Tests\n";
                std::cout << "4. Double Tests\n";
                std::cout << "5. String Tests\n";
                std::cout << "6. Help\n";
                std::cout << "7. Exit\n";
                break;
            }
        case 7: {
            std::cout << BOLDRED << "Exiting..." << RESET << std::endl;
            return 0;
            }
        default:
            std::cout << BOLDRED << "Invalid choice. Try again." << RESET << std::endl;
            break;
        }
    }
    return 0;
}