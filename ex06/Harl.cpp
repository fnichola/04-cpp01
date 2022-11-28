/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 02:57:11 by fnichola          #+#    #+#             */
/*   Updated: 2022/11/28 05:04:48 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

// public:
Harl::Harl(void) {}

Harl::Harl(const Harl& other) {
	(void)other;
}

Harl::~Harl() {}

Harl& Harl::operator=(const Harl& assign) {
	(void)assign;
	return *this;
}

void Harl::complain(std::string level)
{
	const t_funcTable funcTable[5] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error},
		{"", NULL}
	};

	for (int i = 0; funcTable[i].function != NULL; ++i)
	{	
		if (level == funcTable[i].level)
		{
			(this->*funcTable[i].function)();
		}
	}
}

// private:
void Harl::debug(void)
{
	std::cout << "[DEBUG] ";
	std::cout << "I love having extra bacon for my "\
		"7XL-double-cheese-triple-pickle-special-ketchup burger. "\
		"I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO] ";
	std::cout << "I cannot believe adding extra bacon costs more money. "\
		"You didn’t put enough bacon in my burger! "\
		"If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING] ";
	std::cout << "I think I deserve to have some extra bacon for free. "\
		"I’ve been coming for years whereas "\
		"you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR] ";
	std::cout << "This is unacceptable! "\
		"I want to speak to the manager now." << std::endl;
}
