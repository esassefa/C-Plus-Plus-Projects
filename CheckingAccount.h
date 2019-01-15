#pragma once
#include "Account.h"
class CheckingAccount:public Account
{
protected:

public:
	CheckingAccount(double, double);
	void withdrawal(double wit);
	void monthlyProc();
	void printChecking();
	~CheckingAccount();
};

