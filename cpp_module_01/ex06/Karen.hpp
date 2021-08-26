/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:12:07 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/26 13:08:11 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <iostream>

class Karen{

public:
	void	complain( std::string level );
	void	karenfilter( int i );

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void	others( void );
};

#endif
