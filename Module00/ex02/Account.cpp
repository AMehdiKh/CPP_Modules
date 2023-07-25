/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 03:59:04 by ael-khel          #+#    #+#             */
/*   Updated: 2023/07/25 09:15:34 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

int	Account::getNbAccounts(void) { return (Account::_nbAccounts); }
int	Account::getTotalAmount(void) { return (Account::_totalAmount); }
int	Account::getNbDeposits(void) { return (Account::_totalNbDeposits); }
int	Account::getNbWithdrawals(void) { return (Account::_totalNbWithdrawals); }

Account::Account(int initial_deposit)
{
	this->_accountIndex = getNbAccounts();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_nbAccounts += 1;
	_displayTimestamp();
	std::cout	<< " index:" << this->_accountIndex
				<< ";amount:" << checkAmount()
				<< ";created" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout	<< " accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< " index:" << this->_accountIndex
				<< ";amount:" << checkAmount()
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	if (deposit < 0)
	{
		std::cout	<< " index:" << this->_accountIndex
					<< ";p_amount:" << checkAmount()
					<< ";deposit:" << "refused"
					<< std::endl;
	}
	else
	{
		std::cout	<< " index:" << this->_accountIndex
					<< ";p_amount:" << checkAmount()
					<< ";deposit:" << deposit
					<< ";amount:" << (checkAmount() + deposit)
					<< ";nb_deposits:" << ++this->_nbDeposits
					<< std::endl;
		this->_amount += deposit;
		Account::_totalAmount += deposit;
		Account::_totalNbDeposits += 1;
	}
	
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	if (withdrawal > checkAmount())
	{
		std::cout	<< " index:" << this->_accountIndex
					<< ";p_amount:" << checkAmount()
					<< ";withdrawal:" << "refused"
					<< std::endl;
		return (false);
	}
	else
	{
		std::cout	<< " index:" << this->_accountIndex
					<< ";p_amount:" << checkAmount()
					<< ";withdrawal:" << withdrawal
					<< ";amount:" << (checkAmount() - withdrawal)
					<< ";nb_withdrawals:" << ++this->_nbWithdrawals
					<< std::endl;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals += 1;
		return (true);
	}
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::_displayTimestamp(void)
{
	std::time_t	current_time;
	std::tm		*local_time;

	std::time(&current_time);
	local_time = std::localtime(&current_time);
	std::cout   << '['
				<< (local_time->tm_year + 1900)
				<< std::setfill('0')
				<< std::setw(2) << (local_time->tm_mon + 1)
				<< std::setw(2) << local_time->tm_mday << '_'
				<< std::setw(2) << local_time->tm_hour
				<< std::setw(2) << local_time->tm_min
				<< std::setw(2) << local_time->tm_sec
				<< ']';
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout	<< " index:" << this->_accountIndex
				<< ";amount:" << checkAmount()
				<< ";closed" << std::endl;
}
