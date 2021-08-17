/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:17:59 by rcheiko           #+#    #+#             */
/*   Updated: 2021/08/17 17:42:17 by rcheiko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

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

void	Account::displayAccountsInfos( void )
{
	std::cout << "account:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;	
	std::cout << ";deposits:" << Account::_totalNbDeposits;	
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;	
}

Account::Account( int initial_deposit )
{
//	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account( void )
{
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	this->_totalAmount = _totalAmount + deposit;	
	this->_totalNbDeposits++;
	return;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	this->_totalNbWithdrawals++;
	this->_totalAmount = _totalAmount - withdrawal;	
	return true;
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
} 

void	Account::displayStatus( void ) const
{
	return;
}
