#pragma once
#include "Account.h"

class SavingsAccount:public Account
{
protected:
	bool status;
public:
	SavingsAccount(double , double );
	void withdrawal(double);
	void deposit(double);// add deposit to balance and determine if status should be active (ie is balance now over 25)
	void monthlyProc();
	void printSavings();
	~SavingsAccount();
};

