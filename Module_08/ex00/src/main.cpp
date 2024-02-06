/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:53:49 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/06 17:03:12 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Colors.hpp"
#include "../inc/easyfind.hpp"

int main() {
    std::cout << BOLDBLUE << "----TESTER----" << RESET << std::endl;
    std::cout << "Select a test case:\n";
    std::cout << "1. VECTOR: Accessing Elements\n";
    std::cout << "2. VECTOR: Modifiers\n";
    std::cout << "3. VECTOR: Capacity\n";
    std::cout << "4. VECTOR: Iterators\n";
    std::cout << "5. LIST\n";
    std::cout << "6. Help\n";
    std::cout << "0. Exit\n";

    std::string boundary = "----------------------------------------";

    while (true) {
        
        int choice;
        std::cout << "Enter your choice: (1, 2, 3, 4, 5, 6, 0): ";
        std::cin >> choice;

        switch (choice) {
            
            case 1:{
                std::cout << BOLDBLUE << "----VECTOR: Accessing Elements----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

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
                
                std::cout << BOLDWHITE << boundary << RESET << std::endl;
                break;
            }
            case 2:{
                std::cout << BOLDBLUE << "----VECTOR: Modifiers----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

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

                std::cout << BOLDWHITE << boundary << RESET << std::endl;
                break;
            }

            case 3:{
                std::cout << BOLDBLUE << "----VECTOR: Capacity----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

                std::vector<int> vec;
                vec.push_back(1000);
                vec.push_back(2000);
                vec.push_back(3000);
                vec.push_back(4000);
                vec.push_back(5000);
                // vec.push_back(6000);
                // vec.push_back(7000);
                // vec.push_back(8000);
                // vec.push_back(9000);

                printVector(vec);
                
                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Size: " << vec.size() << std::endl; 
                std::cout << "Capacity: " << vec.capacity() << std::endl;
                std::cout << "Empty: " << vec.empty() << std::endl;

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::vector<int> vec2;

                std::cout << "Initial capacity of vec2: " << vec2.capacity() << std::endl;
                vec2.reserve(10);
                std::cout << "Capacity after reserving memory for 10 elements: " << vec2.capacity() << std::endl;

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::vector<int> vec3;
                
                printVector(vec3);
                std::cout << YELLOW << "Empty: " << vec3.empty() << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

                break;
            }
            
            case 4:{
                std::cout << BOLDBLUE << "----VECTOR: Iterators----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

                std::vector<int> vec;
                vec.push_back(5);
                vec.push_back(17);
                vec.push_back(33);
                vec.push_back(69);
                vec.push_back(137);

                printVector(vec);

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Using begin() and end()" << std::endl;
                for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
                    std::cout << *it << " ";
                std::cout << std::endl;

                std::cout << RESET << boundary << YELLOW << std::endl;

                std::cout << "Using rbegin() and rend()" << std::endl;
                for (std::vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); it++)
                    std::cout << *it << " ";
                std::cout << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;
                break;
            }

            case 5:{
                std::cout << BOLDBLUE << "----LIST----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;
                std::list<int> lst;
                lst.push_back(13);
                lst.push_back(5);
                lst.push_back(73);
                lst.push_back(193);
                lst.push_back(375);
                lst.push_back(546);

                std::cout << BOLDMAGENTA << "List: ";
                for (std::list<int>::iterator it = lst.begin(); it != lst.end(); it++)
                    std::cout << *it << " ";
                std::cout << std::endl;

                std::cout << RESET << boundary << YELLOW << std::endl;

                try {
                    std::list<int>::iterator it = easyfind(lst, 20);
                    std::cout << "Element found: " << *it << std::endl;
                }
                catch (std::exception &e) {
                    std::cout << RED << "Element not found" << std::endl;
                }

                std::cout << BOLDWHITE << boundary << RESET << std::endl;
                break;
            }

            case 0:{
                std::cout << BOLDBLUE << "----EXIT----" << RESET << std::endl;
                return 0;
            }

            case 6:{
                std::cout << BOLDBLUE << "----HELP----" << RESET << std::endl;

                std::cout << BOLDWHITE << boundary << RESET << std::endl;

                std::cout << "This program demonstrates the usage of the STL vector container.\n";
                std::cout << "The program provides a menu to select a test case.\n";
                std::cout << "The test cases include:\n";
                std::cout << "1. VECTOR: Accessing Elements\n";
                std::cout << "2. VECTOR: Modifiers\n";
                std::cout << "3. VECTOR: Capacity\n";
                std::cout << "4. VECTOR: Iterators\n";
                std::cout << "5. LIST\n";
                std::cout << "6. Help\n";
                std::cout << "0. Exit\n";

                std::cout << BOLDWHITE << boundary << RESET << std::endl;
                break;
            }
            default:
                std::cout << "Invalid choice" << std::endl;
                break;
        }
    }
    return 0;
}