#include "../inc/zombie.hpp"

int main(){
	Zombie	*horde;

	horde = newZombie("Blob");
	horde->introduction();
	randomChump("Blub");
	delete horde;
	return (0);
}