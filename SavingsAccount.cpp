#include "pch.h"
#include "SavingsAccount.h"
#include <iostream>
#include <iomanip>


using namespace std;

SavingsAccount::SavingsAccount(double bal, double interest):Account(bal,interest)
{
	if(bal < 25) {
		status = false;//false is inactive

	}
	else if (bal > 25) {
		status = true;//true is active
	}
}

void SavingsAccount::withdrawal(double wit) {
	if (status) {
		Account::withdrawal(wit);
		if (balance < 25) {
			status = false;
		}
	}
	else {
		cout << "Account is inactive, can't make a withdrawal" << endl;
	}

}

void SavingsAccount::deposit(double dep) {
	if (balance < 25) {
		status = false;
		Account::deposit(dep);
		if (balance < 25) {
			status = false;
		}
		else if (balance > 25) {
			status = true;
		}
	}
	else if (balance > 25) {
		Account::deposit(dep);
		status = true;
	}
}


void SavingsAccount::monthlyProc() {
	if (monthlyWithdrawals > 3) {
		monthlyServ = monthlyServ + (monthlyWithdrawals - 3);
	}
	Account::monthlyProc();
}

void SavingsAccount::printSavings() {
	cout << fixed << setprecision(2);
	cout << "Savings Balance: $" << balance << endl;
}


SavingsAccount::~SavingsAccount()
{
}
