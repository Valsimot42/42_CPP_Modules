#include "../inc/Zombie.hpp"

Zombie *newZombie(std::string name) {
	Zombie *horde;

	horde = new Zombie(name);
	return (horde);
}