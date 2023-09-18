#include "../inc/Zombie.hpp"

unsigned int validInput(int ac, char **av) {
	(void)av;

	if (ac != 2) {
		std::cout << "Usage: ./ex01 [size]" << std::endl;
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
		horde[i].introduction();
	delete [] horde;
	return (0);
}