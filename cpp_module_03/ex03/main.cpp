/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:06:51 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 11:42:52 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ( void )
{
	std::cout << std::endl << "With DiamondTrap :" << std::endl << std::endl;

	DiamondTrap d("Pierre");

	d.attack("YO");
	d.beRepaired(70);
	d.takeDamage(50);
	d.guardGate();
	d.whoAmI();

	return (0);
}
