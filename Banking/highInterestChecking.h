#pragma once
#include "stdafx.h"
#include "noServiceChargeChecking.h"
using namespace std;

class highInterestChecking : public noServiceChargeChecking
{
public:
	highInterestChecking(int acctNum, string name, double initialBalance)
		: noServiceChargeChecking(acctNum, name, initialBalance)
	{
		m_InterestRate = 5.0;
		m_ChecksRemaining = -1;
		m_MinimumBalance = 1000;
	}
	~highInterestChecking(void) {}
};