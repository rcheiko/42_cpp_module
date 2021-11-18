/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:48:01 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/15 14:14:10 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Default constructor called of Animal" << std::endl << std::endl;
	type = "Animal";
}

Animal::~Animal( void )
{
	std::cout << "Destructor called of Animal" << std::endl;
}

Animal::Animal( Animal const & c) : type(c.type)
{
	std::cout << "Copy constructor called" << std::endl;
}

Animal &		Animal::operator=( Animal const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	type = c.type;
	return *this;
}

std::string	Animal::getType( void ) const
{
	return (type);
}

void	Animal::makeSound( void ) const
{
	std::cout << "Animal Sound" << std::endl;
}
