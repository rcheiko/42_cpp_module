/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 11:26:35 by rcheiko           #+#    #+#             */
/*   Updated: 2021/06/10 12:31:12 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int 	tmp;
	char	c;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int cpt(1) ; cpt < ac ; cpt++)
	{
		for (int i(0) ; av[cpt][i] ; i++)
		{
			if (av[cpt][i] >= 'a' && av[cpt][i] <= 'z')
			{
				tmp = av[cpt][i] - 32;
				c = (char)tmp;
				std::cout << c;
			}
			else
				std::cout << av[cpt][i];
		}
	}
	std::cout << std::endl;
	return (0);
}
