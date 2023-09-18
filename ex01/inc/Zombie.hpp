#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class	Zombie {
public:
	Zombie(std::string name);
	Zombie();
	~Zombie();

	void	introduction() const;
	void	setName(std::string name);
	void	introductionIndex(int index) const;

private:
	std::string const	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif