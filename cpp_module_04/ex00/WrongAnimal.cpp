/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:26:23 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 13:27:53 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "Default constructor called of WrongAnimal" << std::endl << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor called of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & c) : type(c.type)
{
	std::cout << "Copy constructor called" << std::endl;
}

WrongAnimal &		WrongAnimal::operator=( WrongAnimal const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	type = c.type;
	return *this;
}

std::string	WrongAnimal::getType( void ) const
{
	return (type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}
