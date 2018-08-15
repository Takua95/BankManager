#pragma once
#include "stdafx.h"
#include "bankAccount.h"
using namespace std;

class certificateOfDeposit : public bankAccount
{
public:
	certificateOfDeposit(int acctNum, string name, double initialBalance, int matMon)
		: bankAccount(acctNum, name, initialBalance)
	{
		m_MaturityMonths = matMon;
		m_CurrentMonth = 1;
		m_InterestRate = 4.75;
	}
	
	~certificateOfDeposit(void) {}
	
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
		cout << setw(25) << "Interest rate: " << m_InterestRate << "%" << endl;
		cout << setw(25) << "Maturity Months: " << m_MaturityMonths << endl;
		cout << setw(25) << "Current Month: " << m_CurrentMonth << endl;
		cout << endl << setw(60) << setfill('-') << "" << setfill(' ') << endl;

	}
	
	void printStatement()
	{
		printSummary();
		cout << "A full implementation would also print a Certificate of Deposite Account Statement here." << endl;
	}
private:
	double m_InterestRate;
	int m_MaturityMonths;
	int m_CurrentMonth;
};