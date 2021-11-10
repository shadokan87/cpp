
#include "Account.hpp"
#include <iostream>

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
	
}
void
Account::displayStatus( void ) const
{

}

void
Account::makeDeposit( int deposit )
{
	_amount += deposit;
	_nbDeposits++;
// ---------------------
	_totalAmount += deposit;
	_totalNbDeposits++;
}

Account::Account( int initial_deposit )
{
	makeDeposit(initial_deposit);
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
