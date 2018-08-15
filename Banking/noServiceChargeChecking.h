#pragma once
#include "stdafx.h"
#include "checkingAccount.h"
using namespace std;

class noServiceChargeChecking :public checkingAccount
{
public:
	noServiceChargeChecking(int acctNum, string name, double initialBalance)
		: checkingAccount(acctNum, name, initialBalance)
	{
		m_InterestRate = 2.5;
		m_ChecksRemaining = -1;
		m_MinimumBalance = 500;
	}

	~noServiceChargeChecking(void) {}

	void writeCheck(double amount)
	{
		if (m_Balance - amount < 0)
		{
			cout << "Declined: Insufficient funds remain to withdraw that amount" << endl;
			return;
		}
		m_Balance -= amount;
	}

	void printSummary()
	{
		bankAccount::printSummary();
		cout << setw(25) << "Interest rate: " << m_InterestRate << "%" << endl;
		cout << setw(25) << "Minimum Balance: $" << m_MinimumBalance << endl;
		cout << setw(25) << "Unlimited checks " << endl;
		cout << setw(25) << "No monthly service fee " << endl;
		cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
	}
};