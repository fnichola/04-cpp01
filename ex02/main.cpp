/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 02:12:18 by fnichola          #+#    #+#             */
/*   Updated: 2022/09/13 02:29:53 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory Addresses:" << std::endl \
		<< "\tstr: " << &str << std::endl \
		<< "\tptr: " << stringPTR << std::endl \
		<< "\tref: " << &stringREF << std::endl;

	std::cout << std::endl \
		<< "Values: " << std::endl \
		<< "\tstr: " << str << std::endl \
		<< "\tptr: " << *stringPTR << std::endl \
		<< "\tref: " << stringREF << std::endl;
}
