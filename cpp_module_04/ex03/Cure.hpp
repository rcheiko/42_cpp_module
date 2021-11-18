/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:00:26 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/20 14:05:10 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria{

	public:
		Cure( void );
		Cure( std::string const & type );
		~Cure( void );

		Cure &	operator=( Cure const & type );

		std::string const & getType() const;
		AMateria* clone() const;
		void use( ICharacter& target );

	private:
		std::string type;
};

#endif
