/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:50:53 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/15 14:14:48 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal {

public:
	Animal( void );
	Animal( Animal const & c);
	virtual ~Animal( void );

	Animal &	operator=( Animal const & c);

	std::string	getType( void ) const;
	virtual void	makeSound( void ) const = 0;

protected:
	std::string type;
};

#endif
