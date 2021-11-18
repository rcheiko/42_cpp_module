/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:46:39 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/12 16:38:56 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string namee ) : name(namee)
{
	std::cout << "Default constructor called" << std::endl << std::endl;
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & c) : name(c.name)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap &		ClapTrap::operator=( ClapTrap const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	name = c.name;
	return *this;
}

void	ClapTrap::attack(std::string const & target)
{
	Energy_points -= Hitpoints;
	std::cout << "ClapTrap - " << name << " attack " << target << ", causing " << Hitpoints << " points of damage!" << std::endl;
	std::cout << name << " Have " << Energy_points << " energy points." << std::endl << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	Energy_points -= amount;
	std::cout << "ClapTrap - " << name << " Take " << amount << " points of damage ! " << std::endl;
	std::cout << name << " Have " << Energy_points << " energy points." << std::endl << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	Energy_points += amount;
	std::cout << "ClapTrap - " << name << " Have restore " << amount << " energy points." << std::endl;
	std::cout << name << " Have " << Energy_points << " energy points." << std::endl << std::endl;

}
