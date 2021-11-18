/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:24:16 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 11:37:12 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string namee ) : ClapTrap(namee), name(namee)
{
	std::cout << "Default constructor called of FragTrap" << std::endl << std::endl;
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor called of FragTrap" << std::endl;
}

FragTrap::FragTrap( FragTrap const & c) : ClapTrap(c)
{
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap &		FragTrap::operator=( FragTrap const & c)
{
	std::cout << "Assignation operator called" << std::endl;
	name = c.name;
	return *this;
}

void	FragTrap::attack(std::string const & target)
{
	Energy_points -= Hitpoints;
	std::cout << "FragTrap - " << name << " attack " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
	std::cout << "Hit Cost " << Hitpoints << " energy points." << std::endl;
	std::cout << name << " Have " << Energy_points << " energy points." << std::endl << std::endl;
}

void	FragTrap::takeDamage( unsigned int amount )
{
	Energy_points -= amount;
	std::cout << "FragTrap - " << name << " Take " << amount << " points of damage ! " << std::endl;
	std::cout << name << " Have " << Energy_points << " energy points." << std::endl << std::endl;
}

void	FragTrap::beRepaired( unsigned int amount )
{
	Energy_points += amount;
	std::cout << "FragTrap - " << name << " Have restore " << amount << " energy points." << std::endl;
	std::cout << name << " Have " << Energy_points << " energy points." << std::endl << std::endl;

}

void	FragTrap::highFivesGuys( void )
{
	std::cout << "High Fives Completed !" << std::endl;
}
