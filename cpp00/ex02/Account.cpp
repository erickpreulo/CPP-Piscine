/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes <egomes@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 13:50:39 by egomes            #+#    #+#             */
/*   Updated: 2022/03/10 10:37:48 by egomes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account(int initial_deposit) {
	_displayTimestamp();
	std::cout << "index:x;amount:" << initial_deposit << ";created" << std::endl;
	_amount = initial_deposit;
	_totalAmount += _amount;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:x;amount:" << _amount << ";closed" << std::endl;
	return ;
}

void	Account::displayAccountsInfos() {
	// _displayTimestamp();
}

void	Account::makeDeposit(int deposit) {
	// _displayTimestamp();
	(void)deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	// _displayTimestamp();
	(void)withdrawal;
	return (true);
}

int		Account::checkAmount(void) const {
	// _displayTimestamp();
	return (0);
}

void	Account::displayStatus(void) const {
	// _displayTimestamp();
}

void	Account::_displayTimestamp() {
	std::cout << "[TIMES TAMP] ";
}

// Account::Account(int initial_deposit) {
// 	_displayTimestamp();
// 	std::cout << "index:x;amount:" << initial_deposit << ";created" << std::endl;
// 	_amount = initial_deposit;
// 	_totalAmount += _amount;
// }

// Account::~Account() {
// 	_displayTimestamp();
// 	std::cout << "index:x;amount:" << _amount << ";closed" << std::endl;
// 	return ;
// }

// void Account::displayAccountsInfos() {
// 	_displayTimestamp();

// 	std::cout << "accounts:" << _nbAccounts
// 			<< ";total:" << _totalAmount 
// 			<< ";deposits:" << _totalNbDeposits 
// 			<< ";withdrawals:" << _totalNbWithdrawals
// 			<< std::endl;
// }