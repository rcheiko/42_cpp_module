/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:15:04 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 16:00:55 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( std::string _name ) : name(_name)
{}

void	Character::setName(std::string _name)
{
	name = _name;
}

Character::Character( Character const &copy )
{
	*this = copy;
}

Character & Character::operator=( Character const &copy )
{
	setName(copy.getName());
	return *this;
}

std::string const & Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	int i = 0;

	while (i < 4)
	{
		if (tab_bool[i] == false)
		{
			mat[i] = m;
			tab_bool[i] = true;
			break ;
		}
		i++;
	}
	if (i == 3)
		std::cout << "INVENTORY IS FULL" << std::endl;
	
}

void	Character::unequip(int idx)
{
	if (idx <= 3)
	tab_bool[idx] = false;
	mat[idx] = NULL;
}

void	Character::use( int idx, ICharacter& target )
{
	if (idx < 4)
	{
		if (tab_bool[idx] == true && mat[idx]->getType() == "ice")
			std::cout << "* shoots an ice bolt at "<< target.getName() << " *" << std::endl;
		if (tab_bool[idx] == true && mat[idx]->getType() == "cure")
			std::cout << "* heals " << target.getName() << "’s wounds " << " *" << std::endl;
	}
}
