/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnnuaire.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:10:02 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/17 14:14:30 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassAnnuaire.hpp"

void 	str_sub(std::string str)
{
	std::string str2;
	int size = 0;

	size = str.size();
	if (size > 10)
	{
		str2 = str.substr(0,9);
		std::cout << str2 << ".";
	}
	else
	{
		for (int c = 0;(c + size) < 10; c++)
			std::cout << " ";
		std::cout << str;
	}

}

int	ft_isdigit(std::string dig)
{
	if (dig[0] >= '0' && dig[0] <= '9')
		return (0);
	return (1);
}

Annuaire::Annuaire( void )
{
	int i = 0;
	int index_a = 0;
	std::string cmd;
	std::string strindex;

	while (1)
	{
		std::cout << "Type your command : ";
		if (std::cin.peek() == EOF)
			return ;
		std::getline ( std::cin , cmd );
		std::cout << std::endl;
		if (i < 8 && cmd == "ADD")
		{
			std::cout << "first name : ";
			std::getline ( std::cin , Annuaire::first_name[i] );
			std::cout << "last name : ";
			std::getline ( std::cin , Annuaire::last_name[i] );
			std::cout << "nickname : ";
			std::getline ( std::cin , Annuaire::nickname[i] );
			std::cout << "phone number : ";
			std::getline ( std::cin , Annuaire::number[i] );
			std::cout << "darkest secret : ";
			std::getline ( std::cin , Annuaire::secret[i] );
			std::cout << std::endl;
			i++;
		}
		else if (i >= 8 && cmd == "ADD")
		{
			std::cout << "CONTACT IS FULL" << std::endl;
			return;
		}
		if (cmd == "SEARCH" && i > 0)
		{
			std::cout << "     index|first name| last name|  nickname|" << std::endl;
			for (int a = 0; a < i; a++)
			{
				std::cout << "         " << a + 1 << "|";
				str_sub(Annuaire::first_name[a]);
				std::cout << "|";
				str_sub(Annuaire::last_name[a]);
				std::cout << "|";
				str_sub(Annuaire::nickname[a]);
				std::cout << "|";
				std::cout << std::endl;
			}
			std::cout << std::endl;
			std::cout << "Index : ";
			std::getline ( std::cin , strindex );
			if ((ft_isdigit(strindex) == 0) && strindex.size() == 1)
			{
				index_a = strindex[0] - '0';
				if (index_a <= i && index_a != 0)
				{
					std::cout << "first name : " << Annuaire::first_name[index_a - 1] << std::endl;
					std::cout << "last name : " << Annuaire::last_name[index_a - 1] << std::endl;
					std::cout << "nickname : " << Annuaire::nickname[index_a - 1] << std::endl;
					std::cout << "phone number : " << Annuaire::number[index_a - 1] << std::endl;
					std::cout << "darkest secret : " << Annuaire::secret[index_a - 1] << std::endl;
					std::cout << std::endl;
				}
				else
					std::cout << "Error Index" << std::endl;
			}
			else
				std::cout << "Error Index" << std::endl;
			// ctrl+d bug
		}
		if (cmd == "EXIT")
			return;
	}
}

Annuaire::~Annuaire( void ) {
	return;
}
