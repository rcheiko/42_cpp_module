/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:54:27 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/15 14:16:46 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main( void )
{
	int k = 0;
	int n = 50;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* array[n];
//	const Animal* l = new Animal();
//	l->makeSound();

	while (k < n)
	{
		array[k] = new Dog();
		k++;
		array[k + 1] = new Cat();
		k += 2;
	}
	k = 0;
	//i->makeSound();
	//j->makeSound();
	while (k < n)
	{
		delete array[k];
		k++;
		delete array[k + 1];
		k += 2;
	}
	delete	j;
	delete	i;
	return (0);
}
