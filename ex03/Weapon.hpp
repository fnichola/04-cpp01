/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:50:20 by fnichola          #+#    #+#             */
/*   Updated: 2022/11/28 02:39:54 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	public:
	// Constructors
		Weapon();
		Weapon(const Weapon& other);
		Weapon(const std::string type);

	// Destructor
		~Weapon();

	// Operators
		Weapon& operator=(const Weapon& assign);

	// Getters and Setters
		const std::string& GetType() const;
		void SetType(const std::string& type);

	private:
		std::string m_type;
};

#endif // WEAPON_HPP
