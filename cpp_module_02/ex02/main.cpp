/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:47:29 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/29 14:11:47 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed		a(6);
	Fixed		b(8);
	Fixed		c(b);
	Fixed		d(10);
	Fixed		e(2);
	
	c = Fixed(5);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "0 is False - 1 is True" << std::endl;

	std::cout << std::endl;

	std::cout << "Operateurs de comparaisons :" << std::endl << std::endl;

	std::cout << "a == b -> " << (a==b) << std::endl;
	std::cout << "a != b -> " << (a!=b) << std::endl;

	std::cout << std::endl;

	std::cout << "a >= b -> " << (a>=b) << std::endl;
	std::cout << "a <= b -> " << (a<=b) << std::endl;

	std::cout << std::endl;

	std::cout << "a < b -> " << (a<b) << std::endl;
	std::cout << "a > b -> " << (a>b) << std::endl;

	std::cout << std::endl;

	std::cout << "Operateurs Arithmetiques :" << std::endl << std::endl;

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a + b -> " << (a+b) << std::endl;
	std::cout << "a - b -> " << (a-b) << std::endl;

	std::cout << std::endl;

	Fixed	const f(Fixed(5.05f) + Fixed(2));

	std::cout << "f =  5.05 + 2 = " << f << std::endl;

	Fixed	const g(Fixed(5.05f) - Fixed(2));

	std::cout << "g = 5.05 - 2 = " << g << std::endl;

	Fixed	const y(Fixed(5.05f) * Fixed(2));

	std::cout << "y = 5.08 * 2 = " << y << std::endl;

	Fixed	const m(Fixed(10.05f) / Fixed(2));

	std::cout << "m = 10.05 / 2 = " << m << std::endl;

	std::cout << std::endl;
	Fixed	p;
	Fixed	z(4);

	std::cout << "p = " << p << std::endl;
	std::cout << "++p = " << ++p << std::endl;
	std::cout << "--p = " << --p << std::endl;
	std::cout << "p++ = " << p++ << std::endl;
	std::cout << "p = " << p << std::endl;
	std::cout << "p-- = " << p-- << std::endl;

	std::cout << std::endl;
	std::cout << "p = " << p << std::endl;
	std::cout << "z = " << z << std::endl;
	std::cout << "max : " << Fixed::max(p,z) << std::endl;
	std::cout << "min : " << Fixed::min(p,z) << std::endl;

//	std::cout << "max : " << max(p,z) << std::endl;
//	std::cout << "min : " << min(p,z) << std::endl;

	return (0);
}
