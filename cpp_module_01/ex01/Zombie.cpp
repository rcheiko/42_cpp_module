/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:51:28 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/24 16:21:12 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return;
}

Zombie::~Zombie( void )
{
	std::cout << "<" << getName() << ">" << " is died" << std::endl;
	return;
}

void	Zombie::announce( void )
{
	std::cout << "<" << getName() << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

std::string	Zombie::getName( void ) const
{
	return (this->name);
}

void		Zombie::setName( std::string _name )
{
	this->name = _name;
}
