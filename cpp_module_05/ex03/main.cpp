/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:31:53 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:24:23 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{

	Intern z;
	Form *a = z.makeForm("robotomy request", "A");
	a->execute();
	
	std::cout << std::endl;

	Form *b = z.makeForm("shrubbery creation", "B");
	b->execute();

	std::cout << std::endl;

	Form *c = z.makeForm("presidential pardon", "C");
	c->execute();


	std::cout << std::endl;
	z.makeForm("omy request", "A");

	return (0);
}
