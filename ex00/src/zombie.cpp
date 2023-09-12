#include "../inc/zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
	std::cout << this->_name << " has risen from death!" << std::endl;
	return ;
}

Zombie::~Zombie() {
	std::cout << this->_name << " has been laid back to rest!" << std::endl;
	return ;
}

void Zombie::introduction() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}