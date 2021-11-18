/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:59:52 by rcheiko           #+#    #+#             */
/*   Updated: 2021/11/04 17:37:48 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#define TOTAL 1000

int main()
{
	int	i = 1;
	span	b(TOTAL);
	/*span	a(4);

	a.addNumber(2);
	a.addNumber(12);
	a.addNumber(4);
	a.addNumber(8);
	std::cout << a.longestSpan() << std::endl;
	std::cout << a.shortestSpan() << std::endl;*/
	while (i <= TOTAL)
	{
		b.addNumber(i);
		i++;
	}
	std::cout << b.shortestSpan() << std::endl;
	std::cout << b.longestSpan() << std::endl;
	return (0);
}
