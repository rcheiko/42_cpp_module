/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:48:48 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/25 13:43:53 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA ( std::string _name, Weapon &club ) : name(_name) , weapon(club)
{
	return;
}

HumanA::~HumanA ( void )
{
	return;
}

void	HumanA::attack( void )
{
	std::cout << this->name << " attacks with his " << weapon.getType() << std::endl;
	return;
}
