/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:52:49 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/23 17:03:45 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal()
{
	std::cout << "Default constructor called of Cat" << std::endl << std::endl;
	type = "Cat";
	c = new Brain();
}

Cat::~Cat( void )
{
	std::cout << "Destructor called of Cat" << std::endl;
	delete c;
}

Cat::Cat( Cat const & c) : Animal(c)
{
	std::cout << "Copy constructor called" << std::endl;
	type = c.type;
}

Cat &		Cat::operator=( Cat const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	type = c.type;
	return *this;
}

std::string	Cat::getType( void ) const
{
	return (type);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Miaaaaaouuuuu" << std::endl;
}
