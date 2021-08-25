/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:51:05 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/24 17:48:31 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon{

public:

	std::string		const & getType( void );
	void			setType ( std::string _type );

	Weapon( std::string _weapon );
	~Weapon( void );
private:
	std::string type;


};

#endif
