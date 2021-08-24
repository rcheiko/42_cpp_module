/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 11:18:35 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/24 16:26:01 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{

	std::string name = "Pierre";
	int N = 10; // Nbre de Zombie a creer

	Zombie *Zom;
	Zom = zombieHorde(N, name);
	delete [] Zom;
	return (0);
}
