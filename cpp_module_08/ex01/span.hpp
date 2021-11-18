/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:02:28 by rcheiko           #+#    #+#             */
/*   Updated: 2021/11/03 23:52:50 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <map>
# include <algorithm>
# include <stdexcept>

class span{

	public:
		span( unsigned int n );
		span( span const & copy );
		~span( void );

		span&	operator=( span const & copy );

		void	addNumber(int nb);
		int		shortestSpan( void );
		int		longestSpan( void );

	class twoNb : public std::exception{
		public:
			const char * what () const throw ();
	};
	class errorNb : public std::exception{
		public:
			const char * what () const throw ();
	};
	private:
		std::vector<int>	array;
		unsigned int len;
};

#endif
