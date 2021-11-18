/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:05:24 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 16:48:42 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void	MateriaSource::learnMateria(AMateria* type)
{
	int i = 0;

	while (tab_bool[i] == true)
		i++;
	if (i == 3)
		return ;
	if (type->getType() == "ice")
	{
		tab_bool[i] = true;
		mat[i] = type;
	}
	if (type->getType() == "cure")
	{
		tab_bool[i] = true;
		mat[i] = type;
	}
}

AMateria*	MateriaSource::createMateria( std::string const & type )
{
	int i = 0;

	while (i < 4 && tab_bool[i] == true)
	{
		if (mat[i]->getType() == type)
			return (mat[i]);
		i++;
	}
	return (NULL);
}
