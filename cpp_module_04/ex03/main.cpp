/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:42:32 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/23 17:10:26 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main( void )
{
	/*
	AMateria *a = new Ice();
	AMateria *k = new Cure();

	ICharacter *c = new Character("Robert");
	ICharacter *d = new Character("Wha");

	c->equip(a);
	c->use(0, *c);
	c->equip(k);
	c->use(1, *d);
	c->unequip(1);
	c->use(1, *d);

	delete a;
	delete k;
	delete c;
	delete d;
	*/
	
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp = src->createMateria("ice");

	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	return (0);
}
