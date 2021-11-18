/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:12:56 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:22:09 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
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
	void			execute() const;

private:
	std::string	_target;
};

#endif
