/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:42:45 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/27 18:17:44 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
/*
Data::Data( void )
{
}

Data::~Data( void )
{
}

Data::Data( Data const & c)
{
	*this = c;
}

Data &		Data::operator=( Data const & )
{
	return *this;
}*/

uintptr_t serialize(Data * ptr)
{
	uintptr_t value = reinterpret_cast<uintptr_t>(ptr);
	return (value);
}

Data* deserialize(uintptr_t raw)
{
	Data *a = reinterpret_cast<Data *>(raw);
	return (a);
}
