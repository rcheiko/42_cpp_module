/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:15:08 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 12:23:36 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"
//# include "ICharacter.hpp"

class Ice : public AMateria{

	public:
		Ice( void );
		Ice( std::string const & type );
		~Ice( void );

		Ice &	operator=( Ice const & type );

		std::string const & getType() const;
		AMateria* clone() const;
		void use( ICharacter& target );

	private:
		std::string type;
};

#endif
