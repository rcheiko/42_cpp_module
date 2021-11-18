/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:00:39 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 16:48:35 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include <iostream>
# include <string>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource() {};
		~MateriaSource() {};
		MateriaSource( MateriaSource const & c ){
			*this = c;
		};

		MateriaSource &	operator=( MateriaSource const & c) {
			*tab_bool = *c.tab_bool;
			*mat = *c.mat;
			return *this;
		};

		void learnMateria(AMateria* type);
		AMateria* createMateria(std::string const & type);
	private:
		bool		tab_bool[4];
		AMateria	*mat[4];

};

#endif
