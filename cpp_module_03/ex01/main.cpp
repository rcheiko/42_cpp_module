/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:06:51 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/12 19:05:22 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main ( void )
{


	std::string name = "PA";
	ClapTrap a("Whawha");
	ScavTrap b("Cam");

	std::cout << "With ClapTrap :" << std::endl << std::endl;
	a.takeDamage(10);
	a.beRepaired(2);
	a.attack(name);

	std::cout << std::endl << "With ScavTrap :" << std::endl << std::endl;


	b.takeDamage(2);
	b.beRepaired(40);
	b.attack(name);
	b.guardGate();

	return (0);
}
