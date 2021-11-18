/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:32:24 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/22 16:33:52 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat{

public:
	Bureaucrat( std::string name, int _grade );
	Bureaucrat( Bureaucrat const & c);
	~Bureaucrat( void );

	Bureaucrat &	operator=( Bureaucrat const & c);

	void			executeForm(Form const & form);
	std::string		getName();
	int				getGrade();
	void			setGrade(int _grade);
	void			addGrade();
	void			subGrade();
	class GradeTooHighException : public std::exception{
		public:
			GradeTooHighException() throw() {};
			GradeTooHighException( GradeTooHighException const &) throw() {};
			~GradeTooHighException() throw() {};
			GradeTooHighException & operator=( GradeTooHighException const &) throw() {return *this;};
			const char * what () const throw ();
	};
	class GradeTooLowException : public std::exception{
		public:
			GradeTooLowException() throw() {};
			GradeTooLowException( GradeTooLowException const &) throw() {};
			~GradeTooLowException() throw() {};
			GradeTooLowException & operator=( GradeTooLowException const &) throw() {return *this;};
			const char * what () const throw ();
	};

private:
	std::string const	_name;
	int					grade;
};



std::ostream &	operator<<( std::ostream & o, Bureaucrat & rhs);



#endif
