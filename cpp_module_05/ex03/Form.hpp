/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:49:44 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:21:19 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form{

public:
	Form( std::string name, int _grade_execute, int _grade_sign );
	Form( Form const & c);
	~Form( void );

	Form &	operator=( Form const & c);

	std::string		getName() const;
	int				getGrade_execute() const;
	int				getGrade_sign() const;
	bool			getSign() const;
	void			beSigned(Bureaucrat & c);
	void			signForm(Bureaucrat & c);
	virtual void	execute () const = 0;
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException() throw() {};
			GradeTooHighException( GradeTooHighException const &) throw() {};
			~GradeTooHighException() throw() {};
			GradeTooHighException & operator=( GradeTooHighException const &) throw()
			{return *this;};
			const char * what () const throw ();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException() throw() {};
			GradeTooLowException( GradeTooLowException const &) throw() {};
			~GradeTooLowException() throw() {};
			GradeTooLowException & operator=( GradeTooLowException const &) throw()
			{return *this;};
			const char * what () const throw ();
	};

protected:
	std::string const	_name;
	int	const			grade_execute;
	int	const			grade_sign;
	bool				sign;
};

std::ostream &	operator<<( std::ostream & o, Form & rhs);

#endif
