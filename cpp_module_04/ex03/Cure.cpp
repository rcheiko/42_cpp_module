/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:59:25 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 14:53:36 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure( void )
{
	type = "cure";
}

Cure::~Cure( void )
{
}

Cure::Cure( std::string const & type ) : type(type)
{}

std::string const & Cure::getType() const
{
	return (type);
}

AMateria* Cure::clone ( void ) const
{
	AMateria* a = new Cure();
	return (a);
}

void	Cure::use( ICharacter& target )
{
	std::cout << "* heals " << target.getName() << "’s wounds " << " *" << std::endl;
}
