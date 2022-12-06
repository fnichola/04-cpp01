/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:06:09 by fnichola          #+#    #+#             */
/*   Updated: 2022/12/06 03:04:36 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const HumanB &other)
	: m_name(other.m_name), m_weapon(other.m_weapon) {}

HumanB::HumanB(const std::string &name) : m_name(name), m_weapon(NULL) {}

HumanB::~HumanB() {}

HumanB &HumanB::operator=(const HumanB &assign)
{
	m_name = assign.m_name;
	m_weapon = assign.m_weapon;
	return *this;
}

void HumanB::SetWeapon(const Weapon& newWeapon)
{
	m_weapon = &newWeapon;
}

void HumanB::Attack() const
{
	if (m_weapon)
		std::cout << m_name << " attacks with their " << m_weapon->GetType() << std::endl;
	else
		std::cout << m_name << " attacks with their bare hands" << std::endl;
}
