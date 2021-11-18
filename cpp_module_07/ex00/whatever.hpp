/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:38:36 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/28 16:00:33 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP
# include <iostream>
# include <string>

template<typename T>
void	swap(T &a, T &b)
{
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T const min(T const &a, T const &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T const max(T const &a, T const &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif
