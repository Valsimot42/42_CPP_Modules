/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolkova <tbolkova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 15:54:04 by tbolkova          #+#    #+#             */
/*   Updated: 2024/02/13 12:32:27 by tbolkova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"
#include <list>

// int main()
// {
//   MutantStack<int> mstack;
//   mstack.push(5);
//   mstack.push(17);
  
//   std::cout << mstack.top() << std::endl;

//   mstack.pop();
  
//   std::cout << mstack.size() << std::endl;

//   mstack.push(3);
//   mstack.push(5);
//   mstack.push(737);
//   //[...]
//   mstack.push(0);

//   MutantStack<int>::iterator it = mstack.begin();
//   MutantStack<int>::iterator ite = mstack.end();

//   ++it;
//   --it;

//   while (it != ite) {
//     std::cout << *it << std::endl;
//   ++it;
//   }
  
//   std::stack<int> s(mstack);

//   return 0;
// }



int main(void) {
  std::cout << std::endl
    << BOLDBLUE << "----Tests-for-MutantStack----" << RESET
    << std::endl;
  std::cout << BLUE << "Instantiate and fill MutantStack object" << RESET << std::endl << std::endl;
  
  MutantStack<int> mstack;
  int i = 0;
  
  while (i < 5) {
    mstack.push(i * i);
    mstack.push(-i * i);
    i++;
  }
  std::cout << YELLOW << "Finished adding 10 elements to the MutantStack" << RESET << std::endl << std::endl;
  std::cout << YELLOW << "MutantStack content:" << RESET << std::endl;
  int j = 0;
  
  for (MutantStack<int>::iterator itMStack = mstack.begin(); itMStack != mstack.end(); itMStack++) {
    std::cout << BLUE << "mstack[" << RED << j++ << BLUE << "]: " << GREEN << *itMStack << RESET << std::endl;
  }
  
  std::cout << YELLOW << "Mutant Stack end " << RESET << std::endl << std::endl;
  std::cout << YELLOW << "Basic functions of stack to show they work for MutantStack:" << RESET << std::endl;
  std::cout << BLUE << "Top: " << GREEN << mstack.top() << RESET << std::endl;
  std::cout << BLUE << "Size: " << GREEN << mstack.size() << RESET << std::endl;
  
  mstack.pop();
  
  std::cout << YELLOW << "Popping the top element makes " << GREEN << mstack.top() << YELLOW
    << " the new top element.\nThe new size is: " << GREEN << mstack.size() << RESET 
    << std::endl << std::endl;
  std::cout << YELLOW << "Iterator Magic, show begin and end" << RESET << std::endl;
  
  MutantStack<int>::iterator itMStack2 = mstack.begin();
  MutantStack<int>::iterator itEnd = mstack.end();
  
  std::cout << BLUE << "Begin: " << GREEN << *itMStack2 << RESET << std::endl;
  std::cout << BLUE << "End: " << GREEN << *itEnd << RESET << std::endl;
  
  ++itMStack2;
  ++itMStack2;
  
  std::cout << YELLOW << "Iterating the Iterator twice makes *it: " << GREEN << *itMStack2 << RESET << std::endl;

  //List comparison
  std::cout << std::endl << BOLDBLUE << "----Tests-for-List-as-comparison----" << RESET << std::endl;
  std::cout << BLUE << "Instantiate and fill list object" << RESET << std::endl << std::endl;
  
  std::list<int> myList;
  int k = 0;
  
  while (k < 5) {
    myList.push_back(k * k);
    myList.push_back(-k * k);
    k++;
  }
  
  std::cout << YELLOW << "Finished adding 10 elements to the list" << RESET <<  std::endl << std::endl;
  std::cout << YELLOW << "List content:" << RESET << std::endl;
  
  int l = 0;
  
  for (std::list<int>::iterator itList = myList.begin(); itList != myList.end(); itList++) {
    std::cout << BLUE << "myList[" << RED << l++ << BLUE << "]: " << GREEN << *itList << RESET << std::endl;
  }
  
  std::cout << YELLOW << "List end " << RESET << std::endl << std::endl;
  std::cout << YELLOW << "Basic functions of stack to show they work for list" << RESET << std::endl;
  std::cout << BLUE << "Back: " << GREEN << myList.back() << RESET << std::endl;
  std::cout << BLUE << "Size: " << GREEN << myList.size() << RESET << std::endl;
  
  myList.pop_back();
  
  std::cout << YELLOW << "Popping the back element makes " << GREEN << myList.back() << YELLOW <<" the new back element.\nThe new size is: " 
    << GREEN << myList.size() << RESET << std::endl << std::endl;      
  std::cout << YELLOW << "Iterator Magic, show begin and end" << RESET << std::endl;
  
  std::list<int>::iterator itList2 = myList.begin();
  std::list<int>::iterator itEnd2 = myList.end();
  
  std::cout << BLUE << "Begin: " << GREEN << *itList2 << RESET << std::endl;
  std::cout << BLUE << "End: " << GREEN << *(--itEnd2) << RESET << std::endl;
  
  ++itList2;
  ++itList2;
  
  std::cout << YELLOW << "Iterating the Iterator twice makes *it: " << GREEN << *itList2 << RESET << std::endl;
  
  return 0;
}