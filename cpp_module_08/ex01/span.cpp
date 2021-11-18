/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:00:27 by rcheiko           #+#    #+#             */
/*   Updated: 2021/11/04 17:36:41 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span( unsigned int n ) : len(n)
{
}

span::span ( span const & copy )
{
	*this = copy;
}

span::~span ( void )
{

}

span &	span::operator= ( span const & copy )
{
	array = copy.array;
	return (*this);
}

void	span::addNumber( int nb )
{
	try{
		if (array.size() < len)
		{
			if (array.size() >= 1 && *find(array.begin(), array.end(), nb) == nb)
				throw twoNb();
			else
				array.push_back(nb);
		}
		else
			throw errorNb();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

const char * span::twoNb::what() const throw ()
{
	return ("Error same number two times");
}

const char * span::errorNb::what() const throw ()
{
	return ("Error size of the number");
}

int	span::shortestSpan()
{
	int	tmp;
	unsigned int	j = 1;
	try
	{
		if (array.size() >= 2)
		{
			std::sort(array.begin(), array.end());
			tmp = array[1] - array[0];
			while (j != len)
			{
				if (tmp > (array[j] - array[j - 1]))
					tmp = array[j] - array[j - 1];
				j++;
			}
			return tmp;
		}
		else
			throw errorNb();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (-1);
}

int	span::longestSpan()
{
	try
	{
		if (array.size() >= 2)
		{
			std::vector<int>::const_iterator	debut = array.begin();
			std::vector<int>::const_iterator	fin = array.end();
			return *std::max_element(debut, fin) - *std::min_element(debut, fin);
		}
		else
			throw errorNb();
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (-1);
}
