/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leng-chu <-chu@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 18:56:57 by leng-chu          #+#    #+#             */
/*   Updated: 2022/06/14 20:41:49 by leng-chu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip> // std::setfill

int	Account::_nbAccounts;
int Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

void Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm	*time = localtime(&now);
	std::cout << "[" << 1900 + time->tm_year;
	std::cout << std::setw(2) << std::setfill('0') << 1 + time->tm_mon;
	std::cout << std::setw(2) << std::setfill('0') << time->tm_mday << "_";
	std::cout << std::setw(2) << std::setfill('0') << 1 + time->tm_hour;
	std::cout << std::setw(2) << std::setfill('0') << 1 + time->tm_min;
	std::cout << std::setw(2) << std::setfill('0') << 1 + time->tm_sec << "] ";
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account(void)
{
	std::cout << "destructor called" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	deposit = 100;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	withdrawal = 100;
	return 1;
}

int	Account::checkAmount(void) const
{
	return 1;
}

void	Account::displayStatus(void)const
{
	std::cout << "displayStatus here" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	std::cout << "displayAccountsInfos here\n";
}
