/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 09:42:09 by rcheiko           #+#    #+#             */
/*   Updated: 2021/10/27 15:24:27 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cmath>

int	ft_strlen( std::string str )
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	count_point( std::string str )
{
	int	i = 0;
	int	k = 0;
	while (str[i])
	{
		if (str[i] == '.')
			k++;
		i++;
	}
	return (k);
	if (k == 1)
		return (1);
	else
		return (0);
}

int	f_at_end( std::string str)
{
	int	i = 0;
	while (str[i])
		i++;
	i--;
	if (str[i] == 'f')
		return (1);
	return (0);
}

int	is_digit_float( std::string str )
{
	int	i = 0;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i + 1])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			return (1);
		i++;
	}
	return (0);
}

int	is_digit_double( std::string str )
{
	int	i = 0;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			return (1);
		i++;
	}
	return (0);
}

int	is_digit( std::string str )
{
	int	i = 0;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	return (0);
}

int	check_char( std::string str )
{
	if (ft_strlen(str) == 1)
	{
		if (str[0] >= 32 && str[0] <= 127)
			return (1);
	}
	return (0);
}

int	add_zero( std::string str )
{
	int	i = 0;
	while (str[i] && str[i] != '.')
		i++;
	i++;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			return (1);
		i++;
	}
	if (str[i] >= '1' && str[i] <= '9')
		return (1);
	return (0);
}

void	convert_c( std::string str )
{
	char	a = static_cast<char>(str[0]);
	int	b = static_cast<int>(a);
	double	c = static_cast<double>(a);
	float	d = static_cast<double>(a);
	std::cout << "CHAR : " << a << std::endl;
	std::cout << "INT : " << b << std::endl;
	std::cout << "DOUBLE : " << c << std::endl;
	std::cout << "FLOAT : " << d << std::endl;
}

void	convert_i( std::string str )
{
	if (ft_strlen(str) < 10)
	{
		int b = std::stoi(str);
		char	a = static_cast<char>(b);
		double	c = static_cast<double>(b);
		float	d = static_cast<float>(b);
	
		if (a >= 32 && a <= 127)
			std::cout << "CHAR : " << a << std::endl;
		else
			std::cout << "CHAR : Non displayable" << std::endl;
		std::cout << "INT : " << b << std::endl;
		std::cout << "DOUBLE : " << c << ".0" << std::endl;
		std::cout << "FLOAT : " << d << ".0f" << std::endl;
	}
}

void	convert_f( std::string str )
{
	float	d = std::stof(str);
	char	a = static_cast<char>(d);
	int	b = static_cast<int>(d);
	double	c = static_cast<double>(d);
	if (add_zero(str) == 1)
	{
		if (a >= 32 && a <= 127)
			std::cout << "CHAR : " << a << std::endl;
		else
			std::cout << "CHAR : Non displayable" << std::endl;
		std::cout << "INT : " << b << std::endl;
		std::cout << "DOUBLE : " << c << std::endl;
		std::cout << "FLOAT : " << d << "f" << std::endl;
	}
	else
	{
		if (a >= 32 && a <= 127)
			std::cout << "CHAR : " << a << std::endl;
		else
			std::cout << "CHAR : Non displayable" << std::endl;
		std::cout << "INT : " << b << std::endl;
		std::cout << "DOUBLE : " << c << ".0" << std::endl;
		std::cout << "FLOAT : " << d << ".0f" << std::endl;
	}
}

void	convert_d( std::string str )
{
	double	c = std::stod(str);
	char	a = static_cast<char>(c);
	int	b = static_cast<int>(c);
	float	d = static_cast<float>(c);
	if (add_zero(str) == 1)
	{
		if (a >= 32 && a <= 127)
			std::cout << "CHAR : " << a << std::endl;
		else
			std::cout << "CHAR : Non displayable" << std::endl;
		std::cout << "INT : " << b << std::endl;
		std::cout << "DOUBLE : " << c << std::endl;
		std::cout << "FLOAT : " << d << "f" << std::endl;
	}
	else
	{
		if (a >= 32 && a <= 127)
			std::cout << "CHAR : " << a << std::endl;
		else
			std::cout << "CHAR : Non displayable" << std::endl;
		std::cout << "INT : " << b << std::endl;
		std::cout << "DOUBLE : " << c << ".0" << std::endl;
		std::cout << "FLOAT : " << d << ".0f" << std::endl;
	}
}

int	check_nan( std::string str )
{
	if (str.compare("nan") == 0 || str.compare("nanf") == 0)
	{
		std::cout << "CHAR : impossible" << std::endl;
		std::cout << "INT : impossible" << std::endl;
		std::cout << "DOUBLE : nan" << std::endl;
		std::cout << "FLOAT : nanf" << std::endl;
		return (1);
	}
	if (str.compare("+ inf") == 0 || str.compare("+ inff") == 0)
	{
		std::cout << "CHAR : impossible" << std::endl;
		std::cout << "INT : impossible" << std::endl;
		std::cout << "DOUBLE : inf" << std::endl;
		std::cout << "FLOAT : inf" << std::endl;
		return (1);
	}
	if (str.compare("- inf") == 0 || str.compare("- inff") == 0)
	{
		std::cout << "CHAR : impossible" << std::endl;
		std::cout << "INT : impossible" << std::endl;
		std::cout << "DOUBLE : -inf" << std::endl;
		std::cout << "FLOAT : -inf" << std::endl;
		return (1);
	}
	return (0);
}


int main( int ac, char **av )
{
	if (ac == 2)
	{
		std::string a = av[1];
		if (check_nan(a) == 1){}
		else if (is_digit(a) == 0)
			convert_i(a);
		else if (check_char(a) == 1)
			convert_c(a);
		else if (count_point(a) == 1 && f_at_end(a) == 1 && is_digit_float(a) == 0)
			convert_f(a);
		else if (count_point(a) == 1 && is_digit_double(a) == 0)
			convert_d(a);
		else
			std::cout << "ERROR" << std::endl;
	}
	else
		std::cout << "You have to put one argument." << std::endl;
	return (0);
}
