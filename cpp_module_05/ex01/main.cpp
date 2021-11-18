/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:31:53 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/21 16:06:34 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{

	Form fa("Lettre", 50, 30);
	Bureaucrat a("Pierre", 1);
	fa.beSigned(a);
	std::cout << fa << std::endl;

	Form fb("Formulaire", 70, 80);
	Bureaucrat b("Paul", 75);
	fb.beSigned(b);
	std::cout << fb << std::endl;

	Form fc("Feuille", 30, 50);
	Bureaucrat c("Jack", 145);
	fc.beSigned(c);
	std::cout << fc;


	return (0);
}
