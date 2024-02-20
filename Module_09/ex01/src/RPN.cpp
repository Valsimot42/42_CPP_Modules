/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 10:51:08 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/20 15:13:21 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"

void checkInput(std::string& input) {
    for (size_t i = 0; i < input.length(); i++) {
        if (!(isdigit(input[i]) || input[i] == '+' || input[i] == '-'
         || input[i] == '*' || input[i] == '/'  || input[i] == ' ')
         || (!isdigit(input[0]) && !(input[0] == '-') && !(input[0] == '+')))
        throw std::invalid_argument(RED "Error: invalid input" RESET);
    }

    size_t blockStart = 0;
    size_t blockEnd = 0;
    bool stop = false;
    while (1) {
        if (input.find(' ', blockStart) == std::string::npos) {
            stop = true;
            blockEnd = input.length();
        } else 
            blockEnd = input.find(' ', blockStart);
        std::string block = input.substr(blockStart, blockEnd - blockStart);
        checkBlock(block);
        if (stop)
            break;
        blockStart = blockEnd + 1;
    }
}

void checkBlock(std::string& block) {
    for (size_t i = 0; i < block.length(); i++) {
        if ((block[i] == '+' || block[i] == '-' || block[i] == '*' || block[i] == '/')) {
            if (i != 0)
                throw std::invalid_argument(RED "Error: invalid block" RESET);
        }
    }
}

void run(std::string& input) {
    std::stack<int> runStack;
    size_t blockStart = 0;
    size_t blockEnd = 0;
    bool stop = false;
    int result = 0;

    while (true) {
        if (input.find(' ', blockStart) == std::string::npos) {
            stop = true;
            blockEnd = input.length();
        } else
            blockEnd = input.find(' ', blockStart);
        std::string block = input.substr(blockStart, blockEnd - blockStart);
        if (block.empty()) {
            throw std::invalid_argument(RED "Error: invalid block" RESET);
        }
        parsing(runStack, block, result);
        if (stop) {
            if (runStack.size() != 1)
                throw std::invalid_argument(RED "Error: invalid input" RESET);
        } else {
            std::cout << "Result: " << result << std::endl;
            break;
        }
        blockStart = blockEnd + 1;
    }
}

void parsing(std::stack<int>& Stack, std::string& block, int& result) {
    int firstNum;
    int secondNum;

    if (block == "+" || block == "-" || block == "*" || block == "/") {
        if (Stack.size() < 2)
            throw std::invalid_argument(RED "Error: invalid input" RESET);
        secondNum = Stack.top();
        Stack.pop();
        firstNum = Stack.top();
        Stack.pop();
        if (block == "+")
            result = firstNum + secondNum;
        else if (block == "-")
            result = firstNum - secondNum;
        else if (block == "*")
            result = firstNum * secondNum;
        else if (block == "/")
            result = firstNum / secondNum;
        else
            throw std::invalid_argument(RED "Error: wrong format" RESET);
        Stack.push(result);
    } else {
        Stack.push(atoi(block.c_str()));
    }
}