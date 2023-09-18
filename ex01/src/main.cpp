#include "../inc/Zombie.hpp"

unsigned int validInput(int ac, char **av) {
	int	size;

	if (ac != 2) {
		std::cout << "Usage: ./ex01 [size]" << std::endl;
		return (0);
	}
	try {
		size = std::stoi(av[1]);
	}
	catch (std::out_of_range) {
		std::cout << "Number is out of bounds!" << std::endl;
		return (0);
	}
	catch (std::invalid_argument) {
		std::cout << "Argument is not a number!" << std::endl;
		return (0);
	}
	if (size <= 0) {
		std::cout << "Number must be positive!" << std::endl;
		return (0);
	}
	return (1);
}

int main(int ac, char **av) {
	int	size;
	Zombie	*horde;

	if (!validInput(ac, av))
		return (-1);
	size = std::stoi(av[1]);
	horde = zombieHorde(size, "Lee");
	for (int i = 0; i < size; i++)
		horde[i].introductionIndex(i);
	delete [] horde;
	return (0);
}