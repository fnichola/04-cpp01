/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 03:06:09 by fnichola          #+#    #+#             */
/*   Updated: 2022/11/28 02:40:21 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const HumanA &other)
    : m_name(other.m_name), m_weapon(other.m_weapon) {}

HumanA::HumanA(const std::string &name, Weapon &weapon)
    : m_name(name), m_weapon(weapon) {}

HumanA::~HumanA() {}

HumanA &HumanA::operator=(const HumanA &assign)
{
  m_name = assign.m_name;
  m_weapon = assign.m_weapon;
  return *this;
}

void HumanA::Attack() const
{
  std::cout << m_name << " attacks with their " << m_weapon.GetType() << std::endl;
}
