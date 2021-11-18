/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:40:14 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:21:57 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form(target, 5, 25)
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & c) : Form(c.getName(), c.getGrade_execute(), c.getGrade_sign())
{
	_target = c._target;
	*this = c;
}

PresidentialPardonForm &		PresidentialPardonForm::operator=( PresidentialPardonForm const & c )
{
	_target = c._target;
	return *this;
}

std::string	PresidentialPardonForm::getTarget() const
{
	return(_target);
}

void	PresidentialPardonForm::makePres() const
{
	std::cout << getTarget() << " a ete pardonne par Zafod Beeblebrox" << std::endl;
}

void	PresidentialPardonForm::execute() const
{
		makePres();
}
