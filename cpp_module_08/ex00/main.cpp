/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:37:30 by rcheiko           #+#    #+#             */
/*   Updated: 2021/11/03 14:51:33 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> ez;

	ez.push_back(1);
	ez.push_back(2);
	ez.push_back(3);
	ez.push_back(4);

	std::cout << easyfind(ez, 3) << std::endl;
	return (0);
}
