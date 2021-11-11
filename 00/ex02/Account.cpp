
#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

//year month day hour min sec
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( void ) {}
Account::~Account( void ) {}


int
Account::getNbAccounts( void ) { return (Account::_nbAccounts); }

int
Account::getTotalAmount( void ) { return (Account::_totalAmount); }

int
Account::getNbDeposits( void ) { return (Account::_totalNbDeposits); }

int
Account::getNbWithdrawals( void ) { return (Account::_totalNbWithdrawals); }

int
Account::checkAmount( void ) const { return (_amount); }

void
Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:"
		<< _nbAccounts << ";" << "total:"
		<< _totalAmount << ";" << "deposits:"
		<< _totalNbDeposits<< ";" << "withdrawal:"
		<< _totalNbWithdrawals << std::endl;
}
void
Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index" << ":"
		<< _accountIndex << ";" << "amount:"
		<< _amount << ";" << "deposits:"
		<< _nbDeposits
		<< ";" << "withdrawals:"
		<< _nbWithdrawals << std::endl;
}

void
Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";" << "deposit:" << deposit << ";" << "amount:" << _amount + deposit << ";"
		<< "nb_deposts:" << _nbDeposits << std::endl;
	_amount += deposit;
	_nbDeposits++;
// ---------------------
	_totalAmount += deposit;
	_totalNbDeposits++;
}

void
Account::_displayTimestamp( void )
{
	std::time_t t = std::time(NULL);
	std::tm *const __time = std::localtime(&t);
  	std::cout << "["
		<< 1900 + __time->tm_year
		<< __time->tm_mon
		<< __time->tm_mday
		<< __time->tm_hour
		<< __time->tm_min
		<< __time->tm_sec
		<< "]" << " ";
}

Account::Account( int initial_deposit )
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	makeDeposit(initial_deposit);
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount" << ":" << initial_deposit
		<< ";" << "created" << std::endl;
}

bool
Account::makeWithdrawal( int withdrawal )
{
	if (withdrawal <= checkAmount())
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
// ---------------------
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	return (false);
}

/*
int	main( int argc, char **argv )
{

}
*/
