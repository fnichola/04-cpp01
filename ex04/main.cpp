/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 01:47:40 by fnichola          #+#    #+#             */
/*   Updated: 2022/11/28 05:21:40 by fnichola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

void replace(const char* cFilename, const char* cS1, const char* cS2)
{
	std::string s1(cS1);
	std::string s2(cS2);
	std::string filename(cFilename);
	std::string line;
	
	if (s1.length() == 0)
	{
		std::cerr << "Error: First argument cannot be blank" << std::endl;
		return ;
	}
	std::ifstream inFile(filename.c_str());
	if (!inFile.good())
	{
		std::perror("Error: Can't open input file");
		return ;
	}
	std::ofstream outFile(filename.append(".replace").c_str());
	if (!outFile.good())
	{
		std::perror("Error: Can't open output file");
		return ;
	}
	while(std::getline(inFile, line))
	{
		size_t found;

		found = line.find(s1);
		while (found != std::string::npos) 
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
			found = line.find(s1);
		}
		outFile << line;
		if (inFile.good())
			outFile << std::endl;
	}
	inFile.close();
	outFile.close();
}

int main(int argc, char **argv)
{
	if (argc == 4)
		replace(argv[1], argv[2], argv[3]);
	else
		std::cerr << "Must run with three arguments: <filename> <s1> <s2>" << std::endl;
	return (0);
}
