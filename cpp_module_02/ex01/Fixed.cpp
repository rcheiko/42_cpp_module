/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:42 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/11 11:05:01 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & c)
{
	std::cout << "Copy constructor called" << std::endl;
	value = c.getRawBits();
}

Fixed::Fixed( int const c)
{
	std::cout << "Int constructor called" << std::endl;
	value = c << Nb_bits;
}

Fixed::Fixed( float const c)
{
	std::cout << "Float constructor called" << std::endl;
	value = (int)(roundf(c * (1 << Nb_bits)));
}

int	Fixed::toInt( void ) const
{
	return ((int)value >> Nb_bits);
}

float	Fixed::toFloat( void ) const
{
    return ((float)value / (1 << Nb_bits));
}

Fixed &		Fixed::operator=( Fixed const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	value = c.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (value);
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
