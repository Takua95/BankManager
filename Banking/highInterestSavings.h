#pragma once
#include "stdafx.h"
#include "savingsAccount.h"
using namespace std;
class highInterestSavings :public savingsAccount
{
public:
	highInterestSavings(int acctNum, string name, double initialBalance)
		: savingsAccount(acctNum, name, initialBalance)
	{
		m_MinimumBalance = 5000;
	}
	
	~highInterestSavings(void) {}
	
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
	
	void printSummary()
	{
		bankAccount::printSummary();
		cout << setw(25) << "Interest rate: " << m_InterestRate << "%" << endl;
		cout << setw(25) << "Minimum Balance: $" << m_MinimumBalance << endl << endl;
		cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
	}

protected:
	double m_MinimumBalance;
};