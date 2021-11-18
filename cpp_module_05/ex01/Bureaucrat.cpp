/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:14:30 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:27:01 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int _grade ) : _name(name), grade(_grade)
{
	try
	{
		if (getGrade() <= 0)
			throw GradeTooHighException();
		if (getGrade() > 150)
			throw GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
}

Bureaucrat::~Bureaucrat( void )
{
}

Bureaucrat::Bureaucrat( Bureaucrat const & c)
{
	*this = c;
}

Bureaucrat &		Bureaucrat::operator=( Bureaucrat const & c)
{
	grade = c.grade;
	return *this;
}

std::string	Bureaucrat::getName()
{
	return(_name);
}

int	Bureaucrat::getGrade()
{
	return(grade);
}

void	Bureaucrat::setGrade(int _grade)
{
	grade = _grade;
}

void	Bureaucrat::addGrade()
{
	grade--;
	try
	{
		if (getGrade() <= 0)
			throw GradeTooHighException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::subGrade()
{
	grade++;
	try
	{
		if (getGrade() > 150)
			throw GradeTooLowException();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat & rhs)
{
	o << rhs.getName() << ", bureaucrat grade "<< rhs.getGrade() << std::endl;
	return (o);
}

const char * Bureaucrat::GradeTooHighException::what() const throw ()
{
	return ("GradeTooHighException");
}

const char * Bureaucrat::GradeTooLowException::what() const throw ()
{
	return ("GradeTooLowException");
}
