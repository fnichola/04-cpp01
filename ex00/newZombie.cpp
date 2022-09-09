
#include "Zombie.hpp"
#include <string>

// Allocate a new Zombie and return it for use outside of the function.
Zombie* newZombie(std::string name)
{
	Zombie* newZombie;
	newZombie = new Zombie;

	newZombie->set_name(name);
	newZombie->announce();
	return (newZombie);
}
