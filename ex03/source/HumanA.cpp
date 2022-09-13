/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:06:09 by fnichola          #+#    #+#             */
/*   Updated: 2022/09/13 05:57:46 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const HumanA& other)
	:m_weapon(other.m_weapon) // doesn't actually copy??
{
	m_name = other.m_name;
	std::cout << m_name << " was cloned." << std::endl;
}

HumanA::HumanA(const std::string& name, Weapon& weapon)
	:m_name(name), m_weapon(weapon)
{
	std::cout << m_name << " was born holding a " << m_weapon.getType() << "." << std::endl;
}

HumanA::~HumanA()
{
	std::cout << m_name << " died." << std::endl;
}

HumanA& HumanA::operator=(const HumanA& assign)
{
	m_name = assign.m_name;
	m_weapon = assign.m_weapon;
	std::cout << assign.m_name << " was cloned." << std::endl;
	return *this;
}

void HumanA::attack()
{
	std::cout << m_name << " attacks with their " << m_weapon.getType() << std::endl;
}
