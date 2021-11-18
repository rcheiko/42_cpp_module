/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:51:55 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 13:19:23 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal{

public:
	Cat( void );
	Cat( Cat const & c);
	~Cat( void );

	Cat &	operator=( Cat const & c);

	virtual	std::string	getType() const;
	virtual void	makeSound( void ) const;

protected:
	std::string type;
};

#endif
