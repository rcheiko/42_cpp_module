/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:40:04 by rcheiko           #+#    #+#             */
/*   Updated: 2021/11/05 16:49:59 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <string>
# include <vector>
# include <list>
# include <algorithm>
# include <stack>

template <typename T, typename _Sequence = std::deque<T> >
class MutantStack : public std::stack<T, _Sequence>
{
	public:
		typedef typename _Sequence::iterator iterator;

		MutantStack( void ) : std::stack<T, _Sequence>() {}

		MutantStack( MutantStack const & copy )
		{
			*this = copy;
		}
		
		~MutantStack( void ){}

		MutantStack &	operator=( MutantStack const & copy)
		{
			if (*this == copy)
				return (*this);	
			this->std::stack<T, _Sequence>::operator=(copy);
			return (*this);
		}

		iterator	begin()
		{
			return (this->c.begin());
		}

		iterator	end()
		{
			return (this->c.end());
		}
};

#endif
