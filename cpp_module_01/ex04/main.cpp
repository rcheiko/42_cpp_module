/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:47:09 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/25 16:09:10 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main ( int ac, char **av )
{
	std::string filename;
	std::size_t	pos;

	if (ac != 4)
	{
		std::cout << "I need three arguments \"Filename\" , \"string1\" , \"string2\" " << std::endl;
		return (1);
	}
	filename = av[1];
	filename += ".replace";

	std::fstream	fs;
	std::string		test;
	std::string		result;
	fs.open (filename, std::fstream::in | std::fstream::out);

	std::getline(fs, test);
	fs.close();
	pos = test.find(av[2]);
	if (pos == std::string::npos)
	{
		std::cout << "la chaine S1 n'existe pas dans le fichier " << filename << std::endl;
		return (1);
	}
	while (pos != std::string::npos)
	{
		pos = test.find(av[2]);
		if (pos == std::string::npos)
			return (0);
		result = test.substr(0, pos);
		result += test.substr(pos + strlen(av[2]));
		result.insert(pos, av[3]);
		test = result;
		std::ofstream ofs(filename);
		ofs << test << std::endl;
		ofs.close();
	}

	return (0);
}
