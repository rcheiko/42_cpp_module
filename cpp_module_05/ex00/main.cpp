/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:31:53 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/21 12:36:06 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat a("Pierre", 155);
	std::cout << a << std::endl;

	Bureaucrat b("Paul", -5);
	std::cout << b;

	Bureaucrat c("Jack", 5);
	std::cout << std::endl << c;
	c.addGrade();
	std::cout << std::endl << c;
	c.subGrade();
	c.subGrade();
	std::cout << std::endl << c;

	return (0);
}
