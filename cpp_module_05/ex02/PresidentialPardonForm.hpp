/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:40:18 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/25 14:20:40 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form{

public:
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & c );
	~PresidentialPardonForm( void ) {};

	PresidentialPardonForm &	operator=( PresidentialPardonForm const & c );

	std::string		getTarget() const;
	void			makePres() const;
	void			execute(Bureaucrat & b) const;

private:
	std::string	_target;
};

#endif
