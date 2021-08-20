/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:51:28 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/20 12:25:49 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return;
}

Zombie::~Zombie( void )
{
	std::cout << "Debugging Message <" << name << ">" << std::endl;
	return;
}

void	Zombie::announce( void )
{
	std::cout << "<" << this->name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}
