/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassAnnuaire.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 17:10:08 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/17 14:45:15 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSANNUAIRE_H
# define CLASSANNUAIRE_H

# include <iostream>
# include <string>

class Annuaire {

public:
	Annuaire( void );
	~Annuaire( void );
private:
	std::string first_name[8];
	std::string last_name[8];
	std::string nickname[8];
	std::string number[8];
	std::string secret[8];

};


#endif
