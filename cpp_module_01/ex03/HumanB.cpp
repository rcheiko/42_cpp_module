/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:49:16 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/25 13:44:33 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB ( std::string _name ) : name(_name) 
{
	return;
}

HumanB::~HumanB ( void )
{
	return;
}

void	HumanB::setWeapon( Weapon &club )
{
	this->weapon = &club;
	return;
}

void	HumanB::attack( void )
{
	std::cout << this->name << " attacks with his " << weapon->getType() << std::endl;
	return;
}
