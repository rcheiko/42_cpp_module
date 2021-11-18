/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:38:36 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/29 17:29:36 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <string>

template<class T>
class Array{

	public:

		Array()
		{
			array = new T[0];
			size = 1;
		}

		Array( unsigned int n )
		{
			array = new T[n];
			size = n;
		}

		Array( Array const & copy )
		{
			*this = copy;
		}

		~Array( void )
		{
		}

		Array&	operator=( Array const & copy )
		{
			array = copy.array;
			return (*this);
		}

		class outof : public std::exception{
			public:
				outof() throw() {
					std::cout << "ERROR INDEX" << std::endl;
				}
		};

		T& operator[]( unsigned int a )
		{
			if (a < 0 || a >= size)
				throw outof();
			return (array[a]);
		}

	private:
		unsigned int	size;
		T	*array;
};

#endif
