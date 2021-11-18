/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:43:09 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 11:41:24 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string namee ) : ClapTrap(namee), ScavTrap(namee), FragTrap(namee), name(namee)
{
	std::cout << "Default constructor called of DiamondTrap" << std::endl << std::endl;
	_clap_name = ClapTrap::name + "_clap_name";
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destructor called of DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const & c) :  ClapTrap(c), ScavTrap(c), FragTrap(c)
{
	std::cout << "Copy constructor called" << std::endl;
}

DiamondTrap &		DiamondTrap::operator=( DiamondTrap const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	name = c.name;
	return *this;
}

void	DiamondTrap::attack(std::string const & target)
{
	std::cout << "DiamondTrap - Called ScavTrap attack" << std::endl;
	ScavTrap::attack(target);	
}

void	DiamondTrap::takeDamage( unsigned int amount )
{
	ScavTrap::Energy_points -= amount;
	std::cout << "DiamondTrap - " << name << " Take " << amount << " points of damage ! " << std::endl;
	std::cout << name << " Have " << ScavTrap::Energy_points << " energy points." << std::endl << std::endl;
}

void	DiamondTrap::beRepaired( unsigned int amount )
{
	ScavTrap::Energy_points += amount;
	std::cout << "DiamondTrap - " << name << " Have restore " << amount << " energy points." << std::endl;
	std::cout << name << " Have " << ScavTrap::Energy_points << " energy points." << std::endl << std::endl;

}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "Name : " << name << std::endl << "Clap Trap Name : " << _clap_name << std::endl;
}
