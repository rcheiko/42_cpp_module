/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:37 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/12 12:33:31 by rcheiko          ###   ########.fr       */
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

	Fixed 	operator+( Fixed const & c);
	Fixed 	operator-( Fixed const & c);
	Fixed 	operator*( Fixed const & c);
	Fixed 	operator/( Fixed const & c);

	bool	operator==( Fixed const & a );
	bool	operator!=( Fixed const & a );
	bool	operator>=( Fixed const & a );
	bool	operator>( Fixed const & a );
	bool	operator<=( Fixed const & a );
	bool	operator<( Fixed const & a );

	Fixed &	operator++( void );
	Fixed	operator++( int );
	Fixed &	operator--( void );
	Fixed	operator--( int );

	int		toInt( void ) const;
	float	toFloat( void ) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	static int 	max(Fixed &a, Fixed &b);
	static int 	min(Fixed &a, Fixed &b);

private:
	int		value;
	static const int	Nb_bits = 8;
};

std::ostream &	operator<<( std::ostream & o, Fixed const & a );
int				min(Fixed &a, Fixed &b);
int				max(Fixed &a, Fixed &b);

#endif
