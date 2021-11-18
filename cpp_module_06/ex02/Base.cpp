/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:08:41 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/27 19:45:26 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base( void )
{
}

Base	*generate( void )
{
	int	i = 0;
	Base *a = new A;
	Base *b = new B;
	Base *c = new C;
	
	srand (time(NULL));
	i = rand() % 3 + 1;
	switch (i)
	{
		case 1:
			std::cout << "A -> RAND" << std::endl;
			return (a);
			break;
		case 2:
			std::cout << "B -> RAND" << std::endl;
			return (b);
			break;
		case 3:
			std::cout << "C -> RAND" << std::endl;
			return (c);
			break;
		default:
			break;
	}
	return (NULL);
}

void identify(Base * p)
{
	A *a = dynamic_cast<A *>(p);
	if (a != NULL)
		std::cout << "A" << std::endl;
	B *b = dynamic_cast<B *>(p);
	if (b != NULL)
		std::cout << "B" << std::endl;
	C *c = dynamic_cast<C *>(p);
	if (c != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base & p)
{
	try {
		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void) a;
	}
	catch ( std::bad_cast & )
	{}
	try {
		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void) b;
	}
	catch ( std::bad_cast & )
	{}
	try {
		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void) c;
	}
	catch ( std::bad_cast & )
	{}
}
