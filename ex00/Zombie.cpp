#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << this->_name << " has raised from the dead!" << std::endl;
	return ;
}

Zombie::~Zombie() {
	std::cout << this->_name << " has unlifed itself!" << std::endl;
	return ;
}
