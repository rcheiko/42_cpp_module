/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:20:29 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 16:57:06 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( void )
{
}

AMateria::~AMateria( void )
{
}

AMateria::AMateria( std::string const & type) : type(type)
{
}

std::string const & AMateria::getType( void ) const
{
	return (type);
}

void	AMateria::use( ICharacter& target )
{
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
}

/*AMateria* AMateria::clone( void ) const
{
	if (getType == "ice")
		AMateria *a = new Ice();
	if (getType == "cure")
		AMateria *a = new Cure();
	return a;
}*/
