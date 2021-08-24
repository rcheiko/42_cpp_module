/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:56:24 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/24 16:21:17 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string _name )
{
	Zombie *newZombie;

	newZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		newZombie[i].setName(_name);
		newZombie[i].announce();
	}
	return (newZombie);
}
