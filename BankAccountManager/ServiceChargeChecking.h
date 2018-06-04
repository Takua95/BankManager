#pragma once
#include "CheckingAccount.h"
class ServiceChargeChecking :
	public CheckingAccount
{
public:
	ServiceChargeChecking();
	~ServiceChargeChecking();

	double getExcessServiceCharge();
	void writeCheck();

	double serviceChargeAmount;
	int minNumberChecks;

private:

protected:
	double serviceChargeAmount;
	double excessServiceCharge;
	int minNumberChecks;
};

