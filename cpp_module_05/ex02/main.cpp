/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:31:53 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/23 14:15:08 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
	Bureaucrat d("Rack", -5);
	PresidentialPardonForm pb("BONJOUR");
	try{
		pb.execute(d);
	}
	catch (int i){
		if (i == 1)
			d.executeForm(pb);
		else
			std::cout << "no execut form" << std::endl;
	}

	Bureaucrat a("Pierre", 50);
	ShrubberyCreationForm sa("YO");
	try{
		sa.execute(a);
	}
	catch (int i){
		if (i == 1)
			a.executeForm(sa);
		else
			std::cout << "No Execut Form" << std::endl;
	}


	Bureaucrat b("Paul", 40);
	RobotomyRequestForm ra("SALUT");
	try{
		ra.execute(b);
	}
	catch (int i){
		if (i == 1)
			b.executeForm(ra);
		else
			std::cout << "no execut form" << std::endl;
	}


	Bureaucrat c("Jack", 4);
	PresidentialPardonForm pa("BONJOUR");
	try{
		pa.execute(c);
	}
	catch (int i){
		if (i == 1)
			c.executeForm(pa);
		else
			std::cout << "no execut form" << std::endl;
	}



	return (0);
}
