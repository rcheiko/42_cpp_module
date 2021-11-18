/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:14:30 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/22 14:17:52 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( std::string name, int _grade_execute, int _grade_sign ) : _name(name), grade_execute(_grade_execute), grade_sign(_grade_sign)
{
	try
	{
		if (getGrade_execute() <= 0 || getGrade_sign() <= 0)
			throw GradeTooHighException();
		if (getGrade_execute() > 150 || getGrade_sign() > 150)
			throw GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

Form::~Form( void )
{
}

Form::Form( Form const & c) : grade_execute(c.grade_execute), grade_sign(c.grade_sign)
{
	*this = c;
}

Form &		Form::operator=( Form const & c )
{
	sign = c.sign;
	return *this;
}

std::string	Form::getName() const
{
	return(_name);
}

int	Form::getGrade_execute() const
{
	return(grade_execute);
}

int	Form::getGrade_sign() const
{
	return(grade_sign);
}

bool	Form::getSign() const
{
	return (sign);
}

std::ostream &	operator<<( std::ostream & o, Form & rhs)
{
	if (rhs.getSign() == false)
		o << rhs.getName() << " -> grade to execute is "<< rhs.getGrade_execute() << " and grade to sign is " << rhs.getGrade_sign() << std::endl << "Form is not signed" << std::endl;
	if (rhs.getSign() == true)
		o << rhs.getName() << " -> grade to execute is "<< rhs.getGrade_execute() << " and grade to sign is " << rhs.getGrade_sign() << std::endl << "Form is signed" << std::endl;
	return (o);
}

const char * Form::GradeTooHighException::what() const throw ()
{
	return ("GradeTooHighException");
}

const char * Form::GradeTooLowException::what() const throw ()
{
	return ("GradeTooLowException");
}

void	Form::signForm(Bureaucrat & c)
{
	if (sign == true)
	{
		std::cout << c.getName() << " signs " << _name << std::endl;
	}
	if (sign == false && c.getGrade() > grade_execute)
	{
		std::cout << c.getName() <<" cannot sign because grade execute is too high" << std::endl;
	}
	if (sign == false && c.getGrade() > grade_sign)
		std::cout << c.getName() <<" cannot sign because grade sign is too high" << std::endl;
}

void	Form::beSigned(Bureaucrat & c)
{
	if (c.getGrade() < grade_sign && c.getGrade() < grade_execute)
		sign = true;
	signForm(c);
}
/*
void	Form::execute(Bureaucrat & b)
{
	if (getGrade_execute() <= 137 && getGrade_sign() <= 145 && b.getGrade() <= 137)
	{
		ShrubberyCreationForm a("SHRUB");
		a.makeShrub();
	}
	if (getGrade_execute() <= 45 && getGrade_sign() <= 72 && b.getGrade() <= 45)
	{
		RobotmyRequestForm b("ROBOT");
		b.makeRobot();
	}
	if (getGrade_execute() <= 5 && getGrade_sign() <= 25 && b.getGrade() <= 5)
	{
		PresidentialPardonForm c("PRES");
		c.makePres();
	}
}
*/
