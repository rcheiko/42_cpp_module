/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:49:06 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/24 15:27:49 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie{

public:

	void announce( void );

	std::string		getName( void ) const;
	void			setName( std::string _name );

	Zombie( void );
	~Zombie( void );

private:
	std::string name;

};

Zombie* zombieHorde( int N, std::string _name );

#endif
