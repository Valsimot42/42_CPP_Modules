/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:53:49 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/06 12:31:13 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Colors.hpp"
#include "../inc/easyfind.hpp"

// int main() {
//     std::vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
//     //vec.pop_back();
//     vec.push_back(5);
//     vec.at(0) = 100;
//     std::cout << "Vector: " << std::endl;
//     for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//         std::cout << *it << " ";
//     std::cout << std::endl;
    
//     vec.push_back(6);
//     vec.push_back(7);
//     vec.push_back(8);
//     vec.push_back(9);
//     vec.push_back(10);
//     try {
//         std::cout << "Value 5 found at index " << *easyfind(vec, 5) << std::endl;
//         std::cout << "Value 11 found at index " << *easyfind(vec, 11) << std::endl;
//     }
//     catch (std::exception &e) {
//         std::cout << RED << "Value not found" << RESET << std::endl;
//     }
//     return 0;
// }

   void printVector(const std::vector<int> &vec) {
        std::cout << BOLDMAGENTA << "Vector: ";
        for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); it++)
            std::cout << *it << " ";
        std::cout << RESET << std::endl;
    }

int main() {
    std::cout << BOLDBLUE << "----TESTER----" << RESET << std::endl;
    std::cout << "Select a test case:\n";
    std::cout << "1. VECTOR: Accessing Elements\n";
    std::cout << "2. VECTOR: Modifiers\n";
    std::cout << "3. Deque\n";
    std::cout << "4. Map\n";
    std::cout << "5. Set\n";
    std::cout << "6. Multiset\n";
    std::cout << "7. Multimap\n";
    std::cout << "8. Stack\n";
    std::cout << "9. Help\n";
    std::cout << "0. Exit\n";

    std::string boundary = "----------------------------------------";

    while (true) {
        
        int choice;
        std::cout << "Enter your choice: (1, 2, 3, 4, 5, 6, 7, 8, 9, 0): ";
        std::cin >> choice;

        switch (choice) {
            
            case 1:{
                std::cout << BOLDBLUE << "----VECTOR: Accessing Elements----" << RESET << std::endl;

                std::cout << boundary << std::endl;

                std::vector<int> vec;
                vec.push_back(10);
                vec.push_back(20);
                vec.push_back(30);
                vec.push_back(40);
                vec.push_back(50);

                printVector(vec);

                std::cout << boundary << std::endl;

                std::cout << YELLOW;
                std::cout << "Element at index [0]: " << vec[0] << std::endl;
                std::cout << "Element at index [2]: " << vec[2] << std::endl;
                std::cout << "Element at index [4]: " << vec[4] << std::endl;
                try {
                    std::cout << "Element at index [9]: " << vec[9] << std::endl;
                }
                catch (std::exception &e) {
                    std::cout << RED << "Out of range" << RESET << std::endl;
                }

                std::cout << RESET << boundary << std::endl;

                std::cout << GREEN;
                std::cout << "Element at index [1]: " << vec.at(1) << std::endl;
                std::cout << "Element at index [3]: " << vec.at(3) << std::endl;
                std::cout << "Element at index [2]: " << vec.at(2) << std::endl;
                try {
                    std::cout << "Element at index [7]: " << vec.at(7) << std::endl;
                }
                catch (std::exception &e) {
                    std::cout << RED << "Out of range" << RESET << std::endl;
                }

                std::cout << RESET << boundary << std::endl;

                std::cout << CYAN;
                std::cout << "First Element: " << vec.front() << std::endl;
                std::cout << "Last Element: " << vec.back() << std::endl;
                
                std::cout << RESET << boundary << std::endl;
                break;
            }
            case 2:{
                std::cout << BOLDBLUE << "----VECTOR: Modifiers----" << RESET << std::endl;

                std::cout << boundary << std::endl;

                std::vector<int> vec;
                vec.push_back(100);
                vec.push_back(200);
                vec.push_back(300);
                vec.push_back(400);
                vec.push_back(500);

                printVector(vec);

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Pushing 600" << std::endl;
                vec.push_back(600);
                printVector(vec);

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Popping" << std::endl;
                vec.pop_back();
                printVector(vec);

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Inserting 700 at index [2]" << std::endl;
                vec.insert(vec.begin() + 2, 700);
                printVector(vec);

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Erasing element at index [3]" << std::endl;
                vec.erase(vec.begin() + 3);
                printVector(vec);

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Resizing the vector to 3 elements" << std::endl;
                vec.resize(3);
                printVector(vec);

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Swapping the vector with another vector" << std::endl;
                std::vector<int> vec2;
                vec2.push_back(15);
                vec2.push_back(25);
                vec2.push_back(35);
                vec2.push_back(45);
                vec.swap(vec2);
                
                printVector(vec);

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Clearing the vector" << std::endl;
                vec.clear();
                printVector(vec);

                std::cout << RESET << boundary << std::endl;
                
                
                break;
            }


            
            case 0:{
                std::cout << BOLDBLUE << "----EXIT----" << RESET << std::endl;
                return 0;
            }
            default:
                std::cout << "Invalid choice" << std::endl;
                break;
        }
    }
    return 0;
}