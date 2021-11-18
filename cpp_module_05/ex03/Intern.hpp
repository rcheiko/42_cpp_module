/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:08:42 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/26 11:35:15 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern{

public:
	Intern( );
	Intern( Intern const & c);
	~Intern( void );

	Intern &	operator=( Intern const & );

	static Form	*ShrubberyCreation( std::string target );
	static Form	*RobotomyRequest( std::string target );
	static Form	*PresidentialPardon( std::string target );
	Form	*makeForm( std::string form, std::string target );
};

#endif
