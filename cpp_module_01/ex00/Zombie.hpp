/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:49:06 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/20 12:33:50 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Zombie {

public:

	void announce( void );
	void randomChump( std::string name );
	Zombie* newZombie( std::string name );

	Zombie( void );
	~Zombie( void );

private:
	std::string name;

};
