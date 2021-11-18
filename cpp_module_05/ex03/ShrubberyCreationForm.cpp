/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:58:21 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:21:38 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form(target, 137, 145)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & c) : Form(c.getName(), c.getGrade_execute(), c.getGrade_sign())

{
	*this = c;
}

ShrubberyCreationForm &		ShrubberyCreationForm::operator=( ShrubberyCreationForm const & c)
{
	_target = c._target;
	return *this;
}

void	ShrubberyCreationForm::makeShrub() const
{
	std::string ok;
	ok = _target + "_shrubbery";
	std::ofstream outfile (ok);
	outfile << "   -  " << std::endl;
	outfile << "  ---  " << std::endl;
	outfile << " ----- " << std::endl;
	outfile << "-------" << std::endl;
	outfile << "  ---  " << std::endl << std::endl;
	outfile << "   -  " << std::endl;
	outfile << "  ---  " << std::endl;
	outfile << " ----- " << std::endl;
	outfile << "-------" << std::endl;
	outfile << "  ---  " << std::endl;
}

void	ShrubberyCreationForm::execute() const
{
		makeShrub();
}
