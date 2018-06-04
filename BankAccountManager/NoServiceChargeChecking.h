#pragma once
#include "CheckingAccount.h"
class NoServiceChargeChecking :
	public CheckingAccount
{
public:
	NoServiceChargeChecking();
	~NoServiceChargeChecking();

	void createMonthlyStatement();
	void verifyMinimumBalance();
	void writeCheck();

private:
	double minimumBalance;
	double interestRate;

protected:
};

