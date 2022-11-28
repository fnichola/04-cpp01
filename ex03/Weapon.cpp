/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:31:03 by fnichola          #+#    #+#             */
/*   Updated: 2022/11/28 02:44:48 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const Weapon &other) : m_type(other.m_type) {}

Weapon::Weapon(const std::string type)
{
	m_type = type;
}

Weapon::~Weapon() {}

Weapon &Weapon::operator=(const Weapon &assign)
{
  m_type = assign.m_type;
  return *this;
}

const std::string &Weapon::GetType() const
{
	return m_type;
}

void Weapon::SetType(const std::string &type)
{
	m_type = type;
}
