/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:18:05 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 16:53:22 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"
//# include "Amateria.hpp"

class ICharacter;

class AMateria{

	public:
		AMateria( void );
		AMateria( std::string const & type);
		virtual ~AMateria( void );

		AMateria &	operator=( AMateria const &copy )
		{
			type = copy.type;
			return *this;
		}

		virtual std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use( ICharacter& target );

	protected:
		std::string type;
};

#endif
