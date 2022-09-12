/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 03:03:20 by fnichola          #+#    #+#             */
/*   Updated: 2022/09/12 03:31:27 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include "Zombie.hpp"

std::string to_string(int num)
{
	std::stringstream ss;
	ss << num;
	return (ss.str());
}

void announceAll(Zombie* horde, int N)
{
	for (int i = 0; i < N; ++i)
	{
		std::cout << i + 1 << ": ";
		horde[i].announce();
	}
}

void numberAll(Zombie* horde, int N)
{
	for (int i = 0; i < N; ++i)
	{
		horde[i].set_name(horde[i].get_name() + "_" + to_string(i + 1));
	}
}

int main(void)
{
	std::cout << "----------------------------" << std::endl;
	std::cout << "Allocate and announce 42 Bobbies" << std::endl;
	std::cout << "----------------------------" << std::endl;
	Zombie* horde = zombieHorde(42, "Bobby");
	announceAll(horde, 42);

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Add number labels to each zombie" << std::endl;
	std::cout << "----------------------------" << std::endl;
	numberAll(horde, 42);
	announceAll(horde, 42);

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Delete array" << std::endl;
	std::cout << "----------------------------" << std::endl;
	delete[] horde;

	return (0);
}
