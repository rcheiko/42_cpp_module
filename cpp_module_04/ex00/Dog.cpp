/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:53:31 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 13:20:33 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal()
{
	std::cout << "Default constructor called of Dog" << std::endl << std::endl;
	type = "Dog";
}

Dog::~Dog( void )
{
	std::cout << "Destructor called of Dog" << std::endl;
}

Dog::Dog( Dog const & c) : Animal(c), type(c.type)
{
	std::cout << "Copy constructor called" << std::endl;
}

Dog &		Dog::operator=( Dog const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	type = c.type;
	return *this;
}

std::string	Dog::getType( void ) const
{
	return (type);
}

void	Dog::makeSound( void ) const
{
	std::cout << "Ouuaaafff Ouuaaafff" << std::endl;
}
