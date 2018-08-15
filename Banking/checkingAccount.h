#pragma once
#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "stdafx.h"
#include "bankAccount.h"
using namespace std;

class checkingAccount :public bankAccount
{
public:
	checkingAccount(int acctNum, string name, double initialBalance)
		: bankAccount(acctNum, name, initialBalance)
	{
	}
	
	~checkingAccount(void) {}
	
	virtual void writeCheck(double amount) = 0;
	
	void withdraw(double amount)
	{
		if (m_Balance - amount < 0)
		{
			cout << "Declined: Insufficient funds remain to withdraw that amount" << endl;
			return;
		}
		if (m_Balance - amount < m_MinimumBalance)
		{
			cout << "Declined: Minimum balance requirement prohibits this withdrawal" << endl;
			return;
		}
		m_Balance -= amount;
	}
	
	void printStatement()
	{
		printSummary();
		cout << endl << "A full implementation would also print details of a Checking Account Statement here." << endl << endl;
	}
protected:
	double m_InterestRate;
	int m_ChecksRemaining;
	double m_MinimumBalance;
};
#endif