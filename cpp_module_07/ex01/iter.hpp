/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:43:58 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/28 17:59:41 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>
# include <string>

template< typename T >
void	aff(int i, T &array)
{
	std::cout << array[i] << std::endl;
}

template< typename T >
void	iter( T & array, int len_array, void (*tab)(int i, T &array) )
{
	int	i = 0;
	while (i < len_array)
	{
		(*tab)(i, array);
		i++;
	}
}

#endif
