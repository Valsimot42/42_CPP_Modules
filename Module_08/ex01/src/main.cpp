#include "../inc/Span.hpp"

int main (){
	Span sp2 = Span(10000);
	try {
		Span sp1 = Span(70);
		std::cout << MAGENTA << "-------------------TEST-1-(valid parameters)-----------------" << RESET << std::endl;
		sp1.addNumber(5);
		sp1.addNumber(3);
		sp1.addNumber(1);
		sp1.addNumber(17);
		sp1.addNumber(18);
		sp1.addNumber(9);
		sp1.addNumber(11);
		sp1.printContainer();
		sp1.printNumbers();
		std::cout << CYAN << "shortest Span: " << sp1.shortestSpan() << RESET << std::endl;
		std::cout << CYAN << "longest Span: " << sp1.longestSpan() << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << MAGENTA << "-------------------TEST-2-(default constructor)-----------------" << RESET <<std::endl;
		Span sp1 = Span(0);
		sp1.printContainer();
		sp1.printNumbers();
		std::cout << CYAN << "shortest Span: " << sp1.shortestSpan() << RESET << std::endl;
		std::cout << CYAN << "longest Span: " << sp1.longestSpan() << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << MAGENTA << "-------------------TEST-3-(same numbers)-----------------" << RESET <<std::endl;
		Span sp1 = Span(4);
		sp1.addNumber(5);
		sp1.addNumber(5);
		sp1.addNumber(5);
		sp1.addNumber(5);
		sp1.printContainer();
		sp1.printNumbers();
		std::cout << CYAN << "shortest Span: " << sp1.shortestSpan() << RESET << std::endl;
		std::cout << CYAN << "longest Span: " << sp1.longestSpan() << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << MAGENTA << "-------------------TEST-4------------------" << RESET <<std::endl;
		Span sp1(10000);
		sp1.fillContainer(100, -10000, 200000);
		sp1.printContainer();
		sp1.printNumbers();
		std::cout << CYAN << "shortest Span: " << sp1.shortestSpan() << RESET << std::endl;
		std::cout << CYAN << "longest Span: " << sp1.longestSpan() << RESET << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}