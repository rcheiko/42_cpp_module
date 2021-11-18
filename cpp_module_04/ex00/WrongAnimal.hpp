/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:27:12 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 13:29:38 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal {

public:
	WrongAnimal( void );
	WrongAnimal( WrongAnimal const & c);
	~WrongAnimal( void );

	WrongAnimal &	operator=( WrongAnimal const & c);

	std::string	getType( void ) const;
	void	makeSound( void ) const;

protected:
	std::string type;
};

#endif
