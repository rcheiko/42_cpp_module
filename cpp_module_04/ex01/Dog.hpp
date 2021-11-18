/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:51:55 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 16:10:19 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{

public:
	Dog( void );
	Dog( Dog const & c);
	~Dog( void );

	Dog &	operator=( Dog const & c);

	virtual std::string getType( void ) const;
	virtual void	makeSound( void ) const;

protected:
	std::string type;

private:
	Brain* d;
};

#endif
