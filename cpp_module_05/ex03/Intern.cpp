/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:08:29 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:12:46 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( ){
}

Intern::~Intern( void )
{
}

Intern::Intern( Intern const & c){
	*this = c;
}

Intern &		Intern::operator=( Intern const & )
{
	return *this;
}

Form	*Intern::makeForm( std::string form, std::string target )
{
	std::string lvl[3] = {
		"robotomy request",
		"shrubbery creation",
		"presidential pardon"
	};
	Form	*(*fonction[3])( std::string ) = {
		&Intern::RobotomyRequest,
		&Intern::ShrubberyCreation,
		&Intern::PresidentialPardon
	};
	for ( int i = 0; i < 3; i++ )
	{
		if ( form == lvl[i] )
		{
			std::cout << "Intern creates " << form << std::endl;
			return (fonction[i])(target);
		}
	}
	std::cout << form << " is not a good form" << std::endl;
	return (NULL);
}

Form	*Intern::ShrubberyCreation( std::string target )
{
	Form	*a = new ShrubberyCreationForm(target);
	return (a);
}

Form	*Intern::RobotomyRequest( std::string target )
{
	Form *a = new RobotomyRequestForm(target);
	return (a);
}

Form	*Intern::PresidentialPardon( std::string target )
{
	Form *a = new PresidentialPardonForm(target);
	return (a);
}
