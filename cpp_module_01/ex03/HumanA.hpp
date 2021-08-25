/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:57:24 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/25 13:27:07 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanA{

private:
	std::string name;
	Weapon	&weapon;

public:
	void	attack( void );

	HumanA( std::string _name, Weapon &club );
	~HumanA( void );

};


#endif
