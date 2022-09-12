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

		void announce(void);
	
	// Getters
		std::string get_name(void) const;

	// Setters
		void set_name(std::string name);


	private:
		std::string m_name;

};

Zombie* zombieHorde(int N, std::string name);

#endif
