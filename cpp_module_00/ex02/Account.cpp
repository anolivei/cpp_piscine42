/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 03:21:07 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/08 21:10:38 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

/*
** initialize private non members variables - static
*/
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*
** constructor
*/
Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),
	_amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	Account::_nbAccounts++;
	Account::_totalAmount += Account::checkAmount();

	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ';'
		<< "amount:" << Account::checkAmount() << ';'
		<< "created" << std::endl;
}

/*
** destructor
*/
Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ';'
		<< "amount:" << Account::checkAmount() << ';'
		<< "closed" << std::endl;

	Account::_nbAccounts--;
	Account::_totalAmount -= Account::checkAmount();
}

/*
** public non member functions - static
*/
int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout
		<< "accounts:" << Account::getNbAccounts() << ';'
		<< "total:" << Account::getTotalAmount() << ';'
		<< "deposits:" << Account::getNbDeposits() << ';'
		<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

/*
** public member functions
*/
void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ';'
		<< "p_amount:" << Account::checkAmount() << ';';

	if (deposit < 0)
		std::cout << "deposit:refused" << std::endl;

	else
	{
		Account::_totalAmount += deposit;
		Account::_totalNbDeposits++;

		this->_amount += deposit;
		this->_nbDeposits++;

		std::cout
			<< "deposit:" << deposit << ';'
			<< "amount:" << Account::checkAmount() << ';'
			<< "nb_deposits:" << this->_nbDeposits << std::endl;
	}
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ';'
		<< "p_amount:" << Account::checkAmount() << ';';

	if (withdrawal > Account::checkAmount() || withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	std::cout
		<< "withdrawal:" << withdrawal << ';'
		<< "amount:" << Account::checkAmount() << ';'
		<< "nb_withdrawals:" << this->_nbDeposits << std::endl;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex << ';'
		<< "amount:" << Account::checkAmount() << ';'
		<< "deposits:" << this->_nbDeposits << ';'
		<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

/*
** private non member function - static
*/
void	Account::_displayTimestamp( void )
{
	std::time_t	timestamp;
	tm			*t;

	timestamp = std::time(0);
	t = localtime(&timestamp);
	std::cout
		<< '['
		<< t->tm_year + 1900
		<< std::setfill('0') << std::setw(2) << t->tm_mon + 1
		<< std::setfill('0') << std::setw(2) << t->tm_mday
		<< '_'
		<< t->tm_hour << t->tm_min << t->tm_sec
		<< "] ";
}

/*
** private member function
*/
Account::Account( void )
{
	return ;
}