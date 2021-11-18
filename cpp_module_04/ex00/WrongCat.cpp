/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:25:57 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 13:28:40 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal()
{
	std::cout << "Default constructor called of WrongCat" << std::endl << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor called of WrongCat" << std::endl;
}

WrongCat::WrongCat( WrongCat const & c) : WrongAnimal(c)
{
	std::cout << "Copy constructor called" << std::endl;
	type = c.type;
}

WrongCat &		WrongCat::operator=( WrongCat const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	type = c.type;
	return *this;
}

std::string	WrongCat::getType( void ) const
{
	return (type);
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Miaaaaaouuuuu" << std::endl;
}
