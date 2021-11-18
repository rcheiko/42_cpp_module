/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:41:41 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/27 19:09:19 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
# include <string>

typedef struct s_data{

}Data;
/*class Data{

public:
	Data( void );
	Data( Data const & );
	~Data( void );

	Data &	operator=( Data const & );

};*/

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
