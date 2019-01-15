#include "pch.h"
#include "CheckingAccount.h"
#include <iostream>
#include <iomanip>


using namespace std;
CheckingAccount::CheckingAccount(double bal, double interest):Account(bal,interest)
{
}

void CheckingAccount::withdrawal(double wit) {
	if ((balance - wit) < 0) {
		monthlyServ = monthlyServ +  15;
		cout << "You cannot make this withdrawal." << endl;
		if ((balance - monthlyServ) < 0) {
			cout << "Your Checking Account might go into the negative at the end of the month because of the Service Charge, make a deposit before trying to withdraw again!" << endl;
		}
	}
	else if((balance -wit) >= 0 ){
		Account::withdrawal(wit);
	}

}

void CheckingAccount::monthlyProc() {
	double percent = .1;
	monthlyServ = monthlyServ + 5 + (monthlyWithdrawals*percent); // if the withdrawals have not been made because of balance, they are not considered here
	Account::monthlyProc();

}

void CheckingAccount::printChecking() {
	cout << fixed << setprecision(2);
	cout << "Checking Balance: $" <<  balance << endl;

}
CheckingAccount::~CheckingAccount()
{

}
