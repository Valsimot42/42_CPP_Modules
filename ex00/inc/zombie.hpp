#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class	Zombie {
public:
	Zombie(std::string name);
	~Zombie();

	void	introduction() const;

private:
	std::string const	_name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif