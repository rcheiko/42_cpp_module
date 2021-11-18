/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:25:36 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 13:29:28 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public:
	WrongCat( void );
	WrongCat( WrongCat const & c);
	~WrongCat( void );

	WrongCat &	operator=( WrongCat const & c);

	std::string	getType() const;
	void	makeSound( void ) const;

protected:
	std::string type;
};

#endif
