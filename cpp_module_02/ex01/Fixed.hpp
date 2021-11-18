/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:37 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/08 12:38:02 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>
# include <cmath>

class Fixed{

public:
	Fixed( void );
	Fixed( Fixed const & c);
	Fixed( int const c );
	Fixed( float const c );
	~Fixed( void );

	Fixed &	operator=( Fixed const & c);

	int		toInt( void ) const;
	float	toFloat( void ) const;
	int		getRawBits(void) const;
	int		getValue(void) const;

private:
	int		value;
	static const int	Nb_bits = 8;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);

#endif
