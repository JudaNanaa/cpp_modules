/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madamou <madamou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:41:04 by madamou           #+#    #+#             */
/*   Updated: 2024/09/29 22:31:55 by madamou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iostream>
#include <ctime>
#include <sstream>
#include <iomanip>

Account::Account( int initial_deposit ) : _amount(initial_deposit){
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	std::cout << "[19920104_091532] index:"
		<< this->_accountIndex << ";amount:"
		<< initial_deposit << ";created" << std::endl;
}

Account::~Account( void ) {
	std::cout << "[19920104_091532] index:"
		<< this->_accountIndex << ";amount:"
		<< this->_amount << ";closed" << std::endl;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}
	
int	Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}
	
void	Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
		<<  ";total:" << Account::_totalAmount << ";deposits:"
		<< Account::_totalNbDeposits << ";withdrawals:"
		<< Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount - deposit
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits << std::endl;	
}
	
bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount << ";withdrawal:";
	if (this->_amount - withdrawal < 0) {
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;	
	return true;
}
	
int		Account::checkAmount( void ) const {
	return (this->_amount);
}
	
void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void    Account::_displayTimestamp( void ) {
    std::time_t now = std::time(0);

    std::tm* tm_time = std::localtime(&now);
    std::stringstream ss;
    ss << std::setw(4) << (1900 + tm_time->tm_year)
       << std::setw(2) << std::setfill('0') << (tm_time->tm_mon + 1)
       << std::setw(2) << std::setfill('0') << tm_time->tm_mday
       << "_"
       << std::setw(2) << std::setfill('0') << tm_time->tm_hour
       << std::setw(2) << std::setfill('0') << tm_time->tm_min
       << std::setw(2) << std::setfill('0') << tm_time->tm_sec;

    std::cout << "[" << ss.str() << "] ";
}
