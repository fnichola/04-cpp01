
#include "Zombie.hpp"

int main( void )
{
	Zombie* z1 = newZombie("Bob");
	Zombie* z2 = newZombie("Bobby");
	Zombie z3;
	
	randomChump("John");
	z1->announce();
	z2->announce();

	delete z1;
	delete z2;

	z3.set_name("Billy");
	Zombie z4 = z3;
	std::cout << "assign z4 = z3" << std::endl;
	z3.announce();
	z4.announce();
	z3.set_name("Billy the 1st");
	z4.set_name("Billy the 2nd");
	z3.announce();
	z4.announce();

	return (0);
}
