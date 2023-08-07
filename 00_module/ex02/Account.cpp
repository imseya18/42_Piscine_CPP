#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	static int i;

	this->_accountIndex = i;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void )
{

}

void	Account::makeDeposit(int deposit)
{

}

bool	Account::makeWithdrawal(int withdrawal)
{

}

int	Account::checkAmount( void ) const
{

}

void	Account::displayStatus(void) const
{

}

int	Account::getNbAccounts(void)
{

}

int	Account::getTotalAmount(void)
{

}

int	Account::getNbDeposits(void)
{

}

int	Account::getNbWithdrawals(void)
{

}

void	Account::displayAccountsInfos(void)
{

}

void	_displayTimestamp(void)
{
	std::time_t t = std::time(nullptr);
    std::cout << std::put_time(std::localtime(&t), "[%Y%m%d_%H%M%S]") << std::endl;
}