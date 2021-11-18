/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 15:17:06 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:20:12 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include <random>
# include "Form.hpp"


class RobotomyRequestForm : public Form{

public:
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & c );
	~RobotomyRequestForm( void ) {};

	RobotomyRequestForm &	operator=( RobotomyRequestForm const & c );

	std::string		getTarget() const;
	void			makeRobot() const;
	void			execute( Bureaucrat & b ) const;

private:
	std::string	_target;
};

#endif
