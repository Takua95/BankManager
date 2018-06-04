#pragma once
#include "BankAccount.h"
class CheckingAccount :
	public BankAccount
{
public:
	CheckingAccount();
	CheckingAccount(std::string firstName, std::string lastName, double balance);
	~CheckingAccount();
private:

protected:
	virtual void writeCheck() = 0;
};

