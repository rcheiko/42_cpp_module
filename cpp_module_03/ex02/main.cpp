/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:06:51 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/13 10:31:00 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ( void )
{


	std::string name = "PA";
	ClapTrap a("Whawha");
	ScavTrap b("Cam");
	FragTrap c("Lilou");

	std::cout << "With ClapTrap :" << std::endl << std::endl;
	a.takeDamage(10);
	a.beRepaired(2);
	a.attack(name);

	std::cout << std::endl << "With ScavTrap :" << std::endl << std::endl;


	b.takeDamage(2);
	b.beRepaired(40);
	b.attack(name);
	b.guardGate();

	std::cout << std::endl << "With FragTrap :" << std::endl << std::endl;

	c.takeDamage(15);
	c.beRepaired(10);
	c.attack(name);
	c.highFivesGuys();

	return (0);
}
