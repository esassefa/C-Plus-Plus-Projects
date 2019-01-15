#pragma once
class Account
{
protected:
	double balance;
	int monthlyDeposits=0;
	int monthlyWithdrawals=0;
	double annualInt;
	double monthlyServ = 0;
public:
	Account(double bal, double interest);
	virtual void deposit(double dep);
	virtual void withdrawal(double wit);
	void calcInt();
	virtual void monthlyProc();
	~Account();
};

