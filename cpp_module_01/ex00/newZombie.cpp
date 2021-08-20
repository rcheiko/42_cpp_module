/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:56:24 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/20 12:51:56 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
	Zombie* newZombie = new Zombie(name);
	this->name = name;
	return (newZombie);
}
