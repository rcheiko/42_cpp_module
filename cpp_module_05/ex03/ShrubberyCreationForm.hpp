/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 12:49:44 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:21:29 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
# include <iostream>
# include <string>
# include <stdexcept>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form{

public:
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & );
	~ShrubberyCreationForm( void ) {};

	ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & );

	void			execute() const;
	void			makeShrub() const;

private:
	std::string _target;
};

#endif
