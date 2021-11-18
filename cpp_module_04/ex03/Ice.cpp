/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:15:43 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 14:53:16 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice( void )
{
	type = "ice";
}

Ice::~Ice( void )
{
}

Ice::Ice( std::string const & type ) : type(type)
{}

std::string const & Ice::getType() const
{
	return (type);
}

AMateria* Ice::clone ( void ) const
{
	AMateria* a = new Ice();
	return (a);
}

void	Ice::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
	//std::cout << "* heals NAME’s wounds *" << std::endl;
}
