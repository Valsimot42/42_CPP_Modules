#include "../inc/Zombie.hpp"

int main(){
	Zombie	*horde;

	horde = newZombie("Bob");
	horde->introduction();
	randomChump("Gary");
	delete horde;
	return (0);
}