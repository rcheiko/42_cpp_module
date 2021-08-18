/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:17:59 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/18 15:24:08 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals= 0;

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	this->_amount = initial_deposit;
	std::cout << "index:" << this->_nbAccounts;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
	this->_nbAccounts++;
	this->_totalAmount += this->_amount;
	return;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
	return;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "account:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return;
}

void	Account::makeDeposit( int deposit )
{
	this->_totalAmount = Account::_totalAmount + deposit;
	this->_totalNbDeposits++;
	this->_accountIndex++;
	this->_nbDeposits = 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposits :" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (withdrawal <= this->_amount)
	{
		this->_totalAmount = Account::_totalAmount - withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbDeposits;
		std::cout << std::endl;
	}
	else
	{
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";nb_withdrawals:refused";
		std::cout << std::endl;
	}
	return true;
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
} 

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	if (this->_amount > 100)
	{
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";deposits:" << this->_nbDeposits;
		std::cout << ";withdrawals:1" << std::endl;
	}
	else
	{
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";deposits:" << this->_nbDeposits;
		std::cout << ";withdrawals:0" << std::endl;
	}
	return;
}

void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
}

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}
