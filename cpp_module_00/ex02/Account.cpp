/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anolivei <anolivei@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 03:21:07 by anolivei          #+#    #+#             */
/*   Updated: 2022/01/08 16:29:51 by anolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
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
Account::Account(int initial_deposit)
{
	
}

/*
** destructor
*/
Account::~Account( void )
{
	
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
	std::cout << "ola" << std::endl;
}

/*
** public member functions
*/
void	makeDeposit( int deposit )
{
	
}

bool	makeWithdrawal( int withdrawal )
{
	
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	
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
		<< t->tm_year << t->tm_mon << t->tm_mday
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