/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:06:09 by fnichola          #+#    #+#             */
/*   Updated: 2022/09/13 05:08:55 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const HumanB& other)
{
	m_name = other.m_name;
	m_weapon = other.m_weapon;
	std::cout << m_name << " was cloned." << std::endl;
}

HumanB::HumanB(const std::string& name)
{
	m_name = name;
	std::cout << m_name << " was born." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << m_name << " died." << std::endl;
}

HumanB& HumanB::operator=(const HumanB& assign)
{
	m_name = assign.m_name;
	m_weapon = assign.m_weapon;
	std::cout << assign.m_name << " was cloned." << std::endl;
	return *this;
}

void HumanB::attack()
{
	std::cout << m_name << " attacks with their " << m_weapon->getType() << std::endl;
}
