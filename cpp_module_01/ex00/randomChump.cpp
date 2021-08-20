/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:58:44 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/20 12:33:10 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
	Zombie* Zombie = new Zombie(name);
	std::cout << "<" << name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
	delete Zombie;
	return;
}
