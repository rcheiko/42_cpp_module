/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:49:47 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/24 17:51:20 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string _weapon ) : type(_weapon)
{
	return;
}

Weapon::~Weapon( void )
{
	return;
}

std::string const & Weapon::getType( void )
{
	return this->type;
}

void	Weapon::setType( std::string _type )
{
	this->type = _type;
}
