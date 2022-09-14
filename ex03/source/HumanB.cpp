/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:06:09 by fnichola          #+#    #+#             */
/*   Updated: 2022/09/14 08:15:24 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const HumanB &other)
    : m_name(other.m_name), m_weapon(other.m_weapon) {}

HumanB::HumanB(const std::string &name) : m_name(name) {}

HumanB::~HumanB() {}

HumanB &HumanB::operator=(const HumanB &assign)
{
  m_name = assign.m_name;
  m_weapon = assign.m_weapon;
  return *this;
}

void HumanB::setWeapon(const Weapon& newWeapon)
{
	m_weapon = &newWeapon;
}

void HumanB::attack() const
{
  std::cout << m_name << " attacks with their " << m_weapon->getType()
            << std::endl;
}
