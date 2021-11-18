/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:24:24 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 11:40:59 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap{

public:
	FragTrap( std::string namee );
	FragTrap( FragTrap const & c );
	~FragTrap( void );

	FragTrap &	operator=( FragTrap const & c );

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	highFivesGuys(void);

protected:
	int	Hitpoints;
	int	Energy_points;
	int	Attack_damage;

private:
	std::string name;
};

#endif
