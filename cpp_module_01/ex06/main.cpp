/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:23:09 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/26 13:07:03 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main( int ac, char **av )
{
	Karen Karen;

	if (ac == 2)
	{
		if (strcmp(av[1],"DEBUG") == 0 || strcmp(av[1],"INFO") == 0 || strcmp(av[1],"WARNING") == 0 || strcmp(av[1],"ERROR") == 0)
			Karen.complain(av[1]);
		else
			Karen.complain("others");
	}
	else
		std::cout << "Error you need one argument." << std::endl;
	return (0);
}
