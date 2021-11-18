/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:40:05 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/27 18:18:38 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
/*	uintptr_t raw = 5000;
	uintptr_t result;
	Data 	*data;
	data = deserialize(raw);
	result = serialize(data);
	std::cout << result << std::endl;*/

	uintptr_t	raw;
	Data 	*data = NULL;
	std::cout << &data << std::endl;
	raw = serialize(data);
	data = deserialize(raw);
	std::cout << &data << std::endl;
	return (0);
}
