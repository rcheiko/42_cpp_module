/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:37 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/07 15:13:30 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <string>

class Fixed{

public:
	Fixed( void );
	Fixed( Fixed const & c);
	~Fixed( void );

	Fixed &	operator=( Fixed const & c);

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int					a;
	static const int	Nb_Bits = 8;
};

#endif
