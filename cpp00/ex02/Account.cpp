/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:50:39 by egomes            #+#    #+#             */
/*   Updated: 2022/03/14 15:58:32 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_displayTimestamp();

	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	std::cout << "index:" << _accountIndex
			<< ";amount:" << initial_deposit
			<< ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";closed" << std::endl;
	return ;
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();

	std::cout << "accounts:" << _nbAccounts
		<< ";total:" << _totalAmount 
		<< ";deposits:" << _totalNbDeposits 
		<< ";withdrawals:" << _totalNbWithdrawals
		<< std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();

	int cpyAmount = checkAmount();
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits += _nbDeposits;
	_totalAmount += deposit;

	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << cpyAmount
			<< ";deposit:" << deposit
			<< ";amount:" << _amount
			<< ";nb_deposits:" << _nbDeposits
			<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();

	int cpyAmount = checkAmount();

	std::cout << "index:" << _accountIndex
			<< ";p_amount:" << cpyAmount;

	if (withdrawal > _amount) {
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals += _nbWithdrawals;
	_totalAmount -= withdrawal;

	std::cout << ";withdrawal:" << withdrawal
			<< ";amount:" << _amount
			<< ";nb_withdrawal:" << _nbWithdrawals
			<< std::endl;
	return (true);
}

int		Account::checkAmount(void)const {
	return (_amount);
}

void	Account::displayStatus(void)const {
	_displayTimestamp();

	std::cout << "index:" << _accountIndex
			<< ";amount:" << _amount
			<< ";deposits:" << _nbDeposits
			<< ";withdrawals:" << _nbWithdrawals;
	std::cout << std::endl;
}

void	Account::_displayTimestamp() {
	time_t rawtime;
  	struct tm * timeinfo;
  	char buffer [80];

  	time (&rawtime);
  	timeinfo = localtime (&rawtime);

  	strftime (buffer,80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "["<< buffer << "] ";
}
