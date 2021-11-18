/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:44:37 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/12 18:18:52 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ClapTrap {

public:
	ClapTrap( std::string namee );
	ClapTrap( ClapTrap const & c);
	~ClapTrap( void );

	ClapTrap &	operator=( ClapTrap const & c);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string name;
	int Hitpoints;
	int Energy_points;
	int Attack_damage;
};

#endif
