#include "stdafx.h"
#include "BankAccount.h"


BankAccount::BankAccount()
{

}

BankAccount::~BankAccount()
{

}

std::string BankAccount::getName()
{
	return lastName + ", " + firstName;
}

void BankAccount::setName(std::string firstName, std::string lastName)
{
	this->firstName = firstName;
	this->lastName = lastName;
}

void BankAccount::setBalance(double balance)
{
	this->balance = balance;
}

int BankAccount::getAccountNumber()
{
	return accountNumber;
}

int BankAccount::getBalance()
{
	return balance;
}

void BankAccount::makeDeposit()
{

}

void BankAccount::makeWithdraw()
{

}

void BankAccount::createMonthlyStatement()
{

}
