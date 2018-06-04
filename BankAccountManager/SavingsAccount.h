#pragma once
#include "BankAccount.h"
class SavingsAccount :
	public BankAccount
{
public:
	SavingsAccount();
	~SavingsAccount();
private:

protected:
	double interestRate;
	double minimumBalance;
};

