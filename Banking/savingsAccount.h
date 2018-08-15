#pragma once
#include "stdafx.h"
#include "bankAccount.h"
using namespace std;

class savingsAccount :public bankAccount
{
public:
	savingsAccount(int acctNum, string name, double initialBalance)
		: bankAccount(acctNum, name, initialBalance)
	{
		m_InterestRate = 3.99;
	}

	~savingsAccount(void)
	{
	}

	void withdraw(double amount)
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
		cout << setw(25) << "Interest rate: " << m_InterestRate << "%" << endl << endl;
		cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
	}

	void printStatement()
	{
		printSummary();
		cout << "A full implementation would also print a Savings Account Statement here." << endl;
	}

protected:
	double m_InterestRate;
};