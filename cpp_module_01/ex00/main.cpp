/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:18:35 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/20 12:28:10 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
	std::string name1 = "Jack";
//	std::string name2 = "Philipe";
	Zombie Zombie1;

	Zombie1 = newZombie( name1 );
	announce( void );
	delete Zombie1;
//	randomChump( name2 );
	return;
}
