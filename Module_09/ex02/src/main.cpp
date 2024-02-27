/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:50:31 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/27 11:37:16 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PmergeMe.hpp"

int main(int ac, char **av) {
    if (ac <= 2) {
        std::cerr << "Usage: " << av[0] << " <arguments>" << std::endl;
        return 1;
    }
    
    std::vector<int> vec;

    for (int i = 1; i < ac; ++i) {
        std::istringstream iss(av[i]);
        int num;
        while (iss >> num) {
            vec.push_back(num);
        }
    }
    findVectorStraggler(vec);

    std::list<int> lst;

    for (int i = 1; i < ac; ++i) {
        std::istringstream iss(av[i]);
        int num;
        while (iss >> num) {
            lst.push_back(num);
        }
    }
    findListStraggler(lst);
}
