/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:38:17 by rcheiko           #+#    #+#             */
/*   Updated: 2021/11/03 14:51:50 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <map>
# include <algorithm>

template<typename T>
int	easyfind(T & a, int b)
{
			if (*find(a.begin(), a.end(), b) == b)
				return (b);
			else
				return (-1);
}

#endif
