/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:34:13 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/13 10:16:56 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string namee ) : ClapTrap(namee), name(namee)
{
	std::cout << "Default constructor called of ScavTrap" << std::endl << std::endl;
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called of ScavTrap" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & c) : ClapTrap(c)
{
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &		ScavTrap::operator=( ScavTrap const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	name = c.name;
	return *this;
}

void	ScavTrap::attack(std::string const & target)
{
	Energy_points -= Hitpoints;
	std::cout << "ScavTrap - " << name << " attack " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	std::cout << "Hit Cost " << Hitpoints << " energy points." << std::endl;
	std::cout << name << " Have " << Energy_points << " energy points." << std::endl << std::endl;
}

void	ScavTrap::takeDamage( unsigned int amount )
{
	Energy_points -= amount;
	std::cout << "ScavTrap - " << name << " Take " << amount << " points of damage ! " << std::endl;
	std::cout << name << " Have " << Energy_points << " energy points." << std::endl << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount )
{
	Energy_points += amount;
	std::cout << "ScavTrap - " << name << " Have restore " << amount << " energy points." << std::endl;
	std::cout << name << " Have " << Energy_points << " energy points." << std::endl << std::endl;

}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap have enterred in Gate Keeper Mode" << std::endl;
}
