/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:29:23 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 11:39:53 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{

public:
	ScavTrap( std::string namee );
	ScavTrap( ScavTrap const & c );
	~ScavTrap( void );

	ScavTrap &	operator=( ScavTrap const & c );

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();

protected:
	int	Hitpoints;
	int Energy_points;
	int	Attack_damage;

private:
	std::string name;
};

#endif
