#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	static int i = 0;

	this->_accountIndex = i;
	this->_nbAccounts = i;
	this->_totalAmount += _amount;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	i++;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout 	<< " index:" << this->_accountIndex 
				<< ";amount:" << this->_amount 
				<< ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int p_amount;

	p_amount = this->_amount;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout 	<< " index:" << this->_accountIndex 
				<< ";p_amount:" << p_amount
				<< ";deposit:" << deposit
				<< ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int p_amount;

	p_amount = this->_amount;
	if (withdrawal > p_amount)
	{
		_displayTimestamp();
		std::cout 	<< " index:" << this->_accountIndex 
					<< ";p_amount:" << p_amount
					<< ";withdrawal:refused"
					<< std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals += 1;
	_displayTimestamp();
	std::cout 	<< " index:" << this->_accountIndex 
				<< ";p_amount:" << p_amount
				<< ";withdrawal:" << withdrawal
				<< ";amount:" << this->_amount
				<< ";nb_withdrawals:" << this->_nbWithdrawals
				<< std::endl;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout 	<< " index:" << this->_accountIndex
				<< ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits
				<< ";withdrawals:" << this->_nbWithdrawals
				<< std::endl;
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout 	<< " accounts:" << getNbAccounts() + 1
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::_displayTimestamp(void)
{
	std::time_t t = std::time(0);
	std::tm tm = *std::localtime(&t);

	std::ostringstream oss;
	oss << "["
		<< (tm.tm_year + 1900)
		<< std::setw(2) << std::setfill('0') << (tm.tm_mon + 1)
		<< std::setw(2) << std::setfill('0') << tm.tm_mday
		<< "_"
		<< std::setw(2) << std::setfill('0') << tm.tm_hour
		<< std::setw(2) << std::setfill('0') << tm.tm_min
		<< std::setw(2) << std::setfill('0') << tm.tm_sec
		<< "]";
	std::cout << oss.str();
	return ;
}
