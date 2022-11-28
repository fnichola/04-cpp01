#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(const Zombie& other)
: m_name(other.m_name)
{
}

Zombie::~Zombie()
{
	std::cout << m_name + " has been destroyed." << std::endl;
}

Zombie& Zombie::operator=(const Zombie& assign)
{
	m_name = assign.m_name;
	return *this;
}

void Zombie::announce(void)
{
	std::cout << m_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name(void) const
{
	return (m_name);
}

void Zombie::set_name(std::string name)
{
	m_name = name;
}
