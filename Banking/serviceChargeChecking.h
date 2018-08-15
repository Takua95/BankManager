#pragma once
#include "stdafx.h"
#include "checkingAccount.h"
using namespace std;

const int MAX_CHECKS = 5;
const double SVC_CHARGE = 10.0l;

class serviceChargeChecking :public checkingAccount
{
public:
	serviceChargeChecking(int acctNum, string name, double initialBalance)
		: checkingAccount(acctNum, name, initialBalance)
	{
		m_InterestRate = 0;
		m_ChecksRemaining = MAX_CHECKS;
		m_MinimumBalance = 0;
	}
	
	~serviceChargeChecking(void) {}

	void writeCheck(double amount)
	{
		if (m_ChecksRemaining == 0)
		{
			cout << "Declined: No more checks remaining this month" << endl;
			return;
		}

		if (m_Balance - amount < 0)
		{
			cout << "Declined: Insufficient funds remain to withdraw that amount" << endl;
			return;
		}
		m_ChecksRemaining--;
		m_Balance -= amount;

	}
	
	void printSummary()
	{
		bankAccount::printSummary();
		cout << setw(25) << "Checks remaining: " << m_ChecksRemaining << endl;
		cout << setw(25) << "Monthly service fee: $" << SVC_CHARGE << endl;
		cout << setw(25) << "No interest " << endl;
		cout << setw(25) << "No Minimum Balance " << endl;
		cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
	}
};