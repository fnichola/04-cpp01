
#include "Zombie.hpp"
#include <string>

// Allocate a new Zombie and return it for use outside of the function.
Zombie* newZombie(std::string name)
{
	Zombie* zombie = new Zombie;

	zombie->set_name(name);
	zombie->announce();
	return (zombie);
}
