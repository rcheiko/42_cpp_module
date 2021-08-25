/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:57:23 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/25 13:43:21 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB{

private:
	std::string name;
	Weapon	*weapon;

public:

	void	attack( void );
	void	setWeapon( Weapon &club );

	HumanB( std::string _name );
	~HumanB( void );


};


#endif
