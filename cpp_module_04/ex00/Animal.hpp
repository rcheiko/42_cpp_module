/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:50:53 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 13:18:10 by rcheiko          ###   ########.fr       */
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
	~Animal( void );

	Animal &	operator=( Animal const & c);

	virtual std::string	getType( void ) const;
	virtual void	makeSound( void ) const;

protected:
	std::string type;
};

#endif
