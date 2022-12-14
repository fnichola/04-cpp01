/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:59:58 by fnichola          #+#    #+#             */
/*   Updated: 2022/11/28 02:40:50 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
	// Constructors
		HumanB();
		HumanB(const HumanB& other);
		HumanB(const std::string& name);

	// Destructor
		~HumanB();

	// Operators
		HumanB& operator=(const HumanB& assign);

	// Other
		void Attack() const;
		void SetWeapon(const Weapon& newWeapon);

	private:
		std::string m_name;
		const Weapon* m_weapon;
};

#endif // HUMANB_HPP
