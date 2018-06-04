#pragma once
#include <string>
#include <iostream>

class BankAccount
{
public:
	BankAccount();
	~BankAccount();
private:
	//Properties
	std::string firstName;
	std::string lastName;
	int accountNumber;
	double balance;

protected:
	//Functions to return info
	std::string getName();
	void setName(std::string firstName, std::string lastName);
	void setBalance(double balance);
	int getAccountNumber();
	int getBalance();

	//Functions to modify info
	void makeDeposit();
	void makeWithdraw();

	//Virtual Functions to return info
	virtual void createMonthlyStatement();
};

