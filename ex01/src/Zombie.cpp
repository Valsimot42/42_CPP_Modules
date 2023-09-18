#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << this->_name << " has risen from death!" << std::endl;
	return ;
}

Zombie::Zombie() {
	std::cout << "A zombie has risen from death!" << std::endl;
	return ;
}

Zombie::~Zombie() {
	if (this->_name.empty())
		std::cout << "A zombie has been laid back to rest!" << std::endl;
	else
		std::cout << this->_name << " has been laid back to rest!" << std::endl;
	return ;
}

void Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}

void Zombie::introduction() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::introductionIndex(int index) const {
	std::cout << this->_name << " #" << index << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}