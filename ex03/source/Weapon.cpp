/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:31:03 by fnichola          #+#    #+#             */
/*   Updated: 2022/09/13 05:40:13 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon() Constructor" << std::endl;
}

Weapon::Weapon(const std::string type)
{
	m_type = type;
	std::cout << "A " + m_type + " appeared." << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "A " + m_type + " was destroyed." << std::endl;
}

Weapon& Weapon::operator=(const Weapon& assign)
{
	m_type = assign.m_type;
	return *this;
}

const std::string& Weapon::getType()
{
	return m_type;
}

void Weapon::setType(const std::string& type)
{
	m_type = type;
}
