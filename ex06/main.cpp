/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2022/11/28 05:16:55 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

void harlFilter(char *level)
{
	Harl harl;
	std::string levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	int i = 0;
	for (; i < 4; ++i)
	{
		if (levels[i] == level)
			break;
	}

	switch (i)
	{
		case 0:
			harl.complain("DEBUG");
			#ifdef __linux__
			__attribute__ ((fallthrough));
			#endif
		case 1:
			harl.complain("INFO");
			#ifdef __linux__
			__attribute__ ((fallthrough));
			#endif
		case 2:
			harl.complain("WARNING");
			#ifdef __linux__
			__attribute__ ((fallthrough));
			#endif
		case 3:
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		harlFilter(argv[1]);

	return (0);
}
