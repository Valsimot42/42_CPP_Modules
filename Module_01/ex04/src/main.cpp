/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42wolfsburg.d>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:02:07 by tbolkova          #+#    #+#             */
/*   Updated: 2023/09/20 10:02:07 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replaceContent (std::string& content, std::string s1, std::string s2) {

	size_t i;

	i = content.find(s1);
	while (i != std::string::npos) {

		content.erase(i, s1.length());
		content.insert(i, s2);
		i = content.find(s1);
	}
	return ;
};

std::string createContent(std::ifstream &inFile) {

	std::string output;
	std::string	buffer;

	while (inFile.good()) {

		std::getline(inFile, buffer);
		output.append(buffer);
		output.append("\n");
	}
	output.pop_back();
	inFile.close();
	return (output);
}

int main(int ac, char **av) {

	std::string	fileName;
	std::string	s1;
	std::string	s2;
	std::string	fileContent;

	if (ac == 4) {

		fileName = av[1];
		s1 = av[2];
		s2 = av[3];

		if (fileName.empty() || s1.empty() || s2.empty()) {
			std::cout << "Invalid input!" << std::endl;
			return (0);
		}

		std::ifstream	inFile(fileName);
		if (!inFile.is_open()) {
			std::cout << "In file error!" << std::endl;
			inFile.close();
			return (0);
		}

		fileContent = createContent(inFile);
		replaceContent(fileContent, s1, s2);
		fileName.append(".replace");
		std::ofstream outFile(fileName);
		outFile << fileContent;
		outFile.close();
	}
	return (0);
}