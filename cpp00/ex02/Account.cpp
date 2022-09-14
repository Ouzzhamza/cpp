/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:09:53 by houazzan          #+#    #+#             */
/*   Updated: 2022/09/14 21:20:20 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


int  Account::getNbAccounts( void )
{
	return(_nbAccounts);
}

int  Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}

Account::Account(int initial_diposit)
{
    _displayTimestamp();
	_accountIndex = _nbAccounts++;
    _amount = initial_diposit;
   _totalAmount += _amount;	
    std::cout << "index:"   << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:"   << _accountIndex
			  << ";amount:" << _amount
			  << ";closed"  << std::endl;
}
void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits++;
	std::cout << "index:"        << _accountIndex
			  << ";p_amount:"    << _amount
			  << ";diposit:"     << deposit
			  << ";amount:"       << _amount + deposit
			  << ";nb_deposits:" <<  _nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:"   << getNbAccounts()
		      << ";total:"     << getTotalAmount()
			  << ";diposits:"  << getNbDeposits()
			  << ";withdrawals:"<< getNbWithdrawals()  << std::endl;
}


void Account::displayStatus() const
{
	_displayTimestamp();
    std::cout << "index:"      << _accountIndex
              << ";amount:"    << _amount
              << ";diposits:"  << _nbDeposits
              << ";withdrawals:"<< _nbWithdrawals << std::endl;
}

bool    Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (_amount < withdrawal)
	{
		std::cout << "index:"  << _accountIndex
				  << ";p_amount:" << _amount
				  << ";withdrawal:refused" << std::endl;
	}
	else
	{
		_nbWithdrawals++;
        std::cout << "index:"  << _accountIndex
				  << ";p_amount:" << _amount
				  << ";withdrawal:" << withdrawal
				  << ";amount:" << _amount - withdrawal 
				  << "nb_withdrawals:" << _nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
	}
	return(0);

}

void Account::_displayTimestamp(void)
{
	char str[20];
	std::time_t timestamp = std::time(NULL);
	std::strftime (str, 20, "%Y%m%d_%H%M%S", std::localtime(&timestamp));
	std::cout << "[" << str << "] ";
}
