/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:59:58 by fnichola          #+#    #+#             */
/*   Updated: 2022/09/13 05:42:49 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
	// Constructors
		HumanA();
		HumanA(const HumanA& other);
		HumanA(const std::string& name, Weapon& weapon);

	// Destructor
		~HumanA();

	// Operators
		HumanA& operator=(const HumanA& assign);

	// Other
		void attack();

	private:
		std::string m_name;
		Weapon& m_weapon;
};
#endif // HUMANA_HPP
