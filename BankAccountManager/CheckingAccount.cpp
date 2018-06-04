#include "stdafx.h"
#include "CheckingAccount.h"


CheckingAccount::CheckingAccount()
{
}

CheckingAccount::CheckingAccount(std::string firstName, std::string lastName, double balance)
{
	setName(firstName, lastName);
	setBalance(balance);
}


CheckingAccount::~CheckingAccount()
{
}
