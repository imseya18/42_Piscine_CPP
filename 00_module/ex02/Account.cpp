#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
#include <sstream>

Account::Account( int initial_deposit ) : _amount(initial_deposit)
{
	static int i = 0;

	this->_accountIndex = i;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	i++;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
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

void	Account::_displayTimestamp(void)
{
	//std::time_t t = std::time(0);
    //std::tm tm = *std::localtime(&t);
    //std::ostringstream time;
    //time << std::put_time(&tm, "[%Y%m%d_%H%M%S]"); //stock et formate le timestamp dans la string
    //if (!time) 
	//{
    //    std::cout << "Failed on formating timestamp." << std::endl;
    //    return ;
    //}
    //std::cout << time.str();
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