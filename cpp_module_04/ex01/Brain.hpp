/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 13:54:53 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/14 18:19:20 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <string>

class Brain {

public:
	Brain( void );
	Brain( Brain const & c );
	~Brain( void );

	Brain &	operator=( Brain const & c );

protected:
	int	value;
	std::string ideas[100];
};

#endif
