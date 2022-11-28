
#include "Zombie.hpp"

int main( void )
{
	std::cout << "----------------------------" << std::endl;
	std::cout << "newZombie() twice, allocated to heap, should not be destroyed" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Zombie* z1 = newZombie("Bob");
	Zombie* z2 = newZombie("Bobby");
	Zombie z3;

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "randomChump(), should be immediately destroyed" << std::endl;
	std::cout << "----------------------------" << std::endl;
	randomChump("John");

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Check if Bob and Bobby still exist:" << std::endl;
	std::cout << "----------------------------" << std::endl;
	z1->announce();
	z2->announce();

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Delete Bob and Bobby" << std::endl;
	std::cout << "----------------------------" << std::endl;
	delete z1;
	delete z2;

	z3.set_name("Billy");
	Zombie z4 = z3;
	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Zombie z4 = z3, should be a duplicate." << std::endl;
	std::cout << "----------------------------" << std::endl;
	z3.announce();
	z4.announce();

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Rename z3 and z4 to check they're unique copies.\n"
		"Should auto destroy when out of scope" << std::endl;
	std::cout << "----------------------------" << std::endl;
	z3.set_name("Billy the 1st");
	z4.set_name("Billy the 2nd");
	z3.announce();
	z4.announce();

	return (0);
}
