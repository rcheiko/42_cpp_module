/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:14:01 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/26 13:08:56 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::complain( std::string level )
{
	std::string lvl[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	if (level.compare("others") == 0)
		Karen::others();
	for (int i = 0; i < 4; i++)
	{
		if (level == lvl[i])
		{
			Karen::karenfilter(i);
			return;
		}
	}
}

void	Karen::karenfilter ( int i )
{
	std::string lvl[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	switch(i)
	{
		case 0:
			Karen::debug();
		case 1:
			Karen::info();
		case 2:
			Karen::warning();
		case 3:
			Karen::error();
			break;
	}
	return;
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}
void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}
void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years an you just started working here last month." << std::endl << std::endl;
}
void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}
void	Karen::others( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
