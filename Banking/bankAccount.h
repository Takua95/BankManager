#pragma once
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include "stdafx.h"
using namespace std;

class bankAccount
{
public:
	bankAccount(int acctNum, string name, double initialBalance)
	{
		m_AcctNumber = acctNum;
		m_Name = name;
		m_Balance = initialBalance;
	}
	~bankAccount(void) {}

	string get_Name()
	{
		return m_Name;
	}

	int get_AcctNumber()
	{
		return m_AcctNumber;
	}

	double get_Balance()
	{
		return m_Balance;
	}

	void deposit(double amount)
	{
		m_Balance += amount;
		cout << "$" << amount << " has been deposited to your account" << endl;
	}

	virtual void withdraw(double amount) = 0;
	virtual void printStatement() = 0;

	virtual void printSummary()
	{
		cout << setw(60) << setfill('-') << "" << setfill(' ') << endl;
		cout << endl << setw(25) << "" << "Account Summary" << endl << endl;
		cout << setw(25) << "Name: " << m_Name << endl;
		cout << setw(25) << "Account #: " << m_AcctNumber << endl;
		cout << setw(25) << "Current Balance: $" << m_Balance << endl;
	}

protected:
	string m_Name;
	int m_AcctNumber;
	double m_Balance;
};
#endif
