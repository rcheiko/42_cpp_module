/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:06:51 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/12 16:39:38 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ( void )
{
	std::string name = "PA";
	ClapTrap a("Whawha");

	//ClapTrap b("Whawha");
	//ClapTrap a(b);

	//a = ClapTrap("YO");

	a.takeDamage(8);
	a.beRepaired(5);
	a.attack(name);

	return (0);
}
