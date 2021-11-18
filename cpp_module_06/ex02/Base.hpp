/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 19:08:34 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/27 19:38:00 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP
# include <iostream>
# include <string>
# include <stdlib.h>
# include <time.h>

class Base{
public:
	virtual ~Base( void );
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base * generate(void);
void	identify(Base * p);
void	identify(Base & p);
#endif
