/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:42 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/12 13:34:30 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
//	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::~Fixed( void )
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( Fixed const & c)
{
//	std::cout << "Copy constructor called" << std::endl;
	value = c.getRawBits();
}

Fixed::Fixed( int const c)
{
//	std::cout << "Int constructor called" << std::endl;
	value = c << Nb_bits;
}

Fixed::Fixed( float const c)
{
//	std::cout << "Float constructor called" << std::endl;
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
//	std::cout << "Assignation operator called" << std::endl;
	value = c.getRawBits();
	return (*this);
}

Fixed		Fixed::operator+( Fixed const & c)
{
	Fixed val;

	val.value = value + c.value;
	return((float)val.value / (1 << Nb_bits));
}

Fixed		Fixed::operator-( Fixed const & c)
{
	Fixed val;

	val.value = value - c.value;
	return((float)val.value / (1 << Nb_bits));
}

Fixed		Fixed::operator*( Fixed const & c)
{
	Fixed val;

	val = toFloat() * c.toFloat();
	return(val);
}

Fixed		Fixed::operator/( Fixed const & c)
{
	Fixed val;

	val.value = toFloat() / c.toFloat();
	return(val.value);
}

bool	Fixed::operator==( Fixed const & a )
{
	return (value == a.value);
}

bool	Fixed::operator!=( Fixed const & a )
{
	return (value != a.value);
}

bool	Fixed::operator>=( Fixed const & a )
{
	return (value >= a.value);
}

bool	Fixed::operator>( Fixed const & a )
{
	return (value > a.value);
}

bool	Fixed::operator<=( Fixed const & a )
{
	return (value <= a.value);	
}

bool	Fixed::operator<( Fixed const & a )
{
	return (value < a.value);	
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed &	Fixed::operator++()
{
	++value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp;
	tmp.value = value;
	value++;
	return (tmp);
}

Fixed &	Fixed::operator--()
{
	--value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp;
	tmp.value = value;
	value--;
	return (tmp);
}

int 	Fixed::max( Fixed &a, Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a.toFloat());
	return (b.toFloat());
}

int 	Fixed::min( Fixed &a, Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return (a.toFloat());
	return (b.toFloat());
}

int 	min( Fixed &a, Fixed &b )
{
	if (a.getRawBits() < b.getRawBits())
		return (a.toFloat());
	return (b.toFloat());
}

int 	max( Fixed &a, Fixed &b )
{
	if (a.getRawBits() > b.getRawBits())
		return (a.toFloat());
	return (b.toFloat());
}

int	Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}
