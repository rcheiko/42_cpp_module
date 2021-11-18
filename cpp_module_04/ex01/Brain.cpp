/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:55:23 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 18:19:13 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default constructor called of Brain" << std::endl << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Destructor called of Brain" << std::endl;
}

Brain::Brain( Brain const & )
{
	std::cout << "Copy constructor called" << std::endl;
}

Brain &		Brain::operator=( Brain const & )
{
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}
