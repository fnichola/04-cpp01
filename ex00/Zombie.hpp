#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
	// Constructors
		Zombie(void);
		Zombie(const Zombie& other);
	
	// Destructor
		~Zombie();

	// Operators
		Zombie& operator=(const Zombie& assign);

	// Getters
		std::string get_name(void) const;

	// Setters
		void set_name(std::string name);

	// Other
		void announce(void);

	private:
		std::string m_name;

};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
