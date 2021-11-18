/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:17:10 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:20:07 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form(target, 45, 72){
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & c) : Form(c.getName(), c.getGrade_execute(), c.getGrade_sign())
{
	_target = c._target;
	*this = c;
}

RobotomyRequestForm &		RobotomyRequestForm::operator=( RobotomyRequestForm const & c )
{
	_target = c._target;
	return *this;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return(_target);
}

void	RobotomyRequestForm::makeRobot() const
{
	float j = 0;
	std::cout << "BZZZZZZ BZZZZZ * bruit de perceuse *" << std::endl;
	
	srand( (unsigned)time( NULL ) );
	for (int i = 0; i < 4; i++) 
		j = (float)rand()/RAND_MAX;
	if (j >= 0.5)
		std::cout << getTarget() << " a bien ete robotomizee" << std::endl;
	else 
		std::cout << getTarget() << " n'a pas bien ete robotomizee" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat & b) const
{
	if (getGrade_execute() == 45 && getGrade_sign() == 72 && b.getGrade() < 45 && b.getGrade() >= 1)
	{
		makeRobot();
		throw 1;
	}
	else
		throw 2;
}
