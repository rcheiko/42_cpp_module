/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:12:29 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 14:09:23 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include <string>
//# include "AMateria.hpp"
# include "ICharacter.hpp"


class Character : public ICharacter
{
	public:
		Character( std::string _name );
		Character( Character const &copy );
		~Character( void ) {};

		Character &	operator=( Character const &copy );

		void	setName(std::string _name);
		std::string const & getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);


	private:
		bool	tab_bool[4];
		AMateria *mat[4];
		std::string name;
};

#endif
