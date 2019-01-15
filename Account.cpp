#include "pch.h"
#include "Account.h"


Account::Account(double bal, double interest)
{
	balance = bal;
	annualInt = interest;
	monthlyWithdrawals = 0;
	monthlyDeposits = 0;
	monthlyServ = 0;
}

 void Account::deposit(double dep) {
	 balance = balance + dep;
	 monthlyDeposits++;

}
 void Account::withdrawal(double wit) {
	 balance = balance - wit;
	 monthlyWithdrawals++;

 }
 void Account::calcInt() {
	 double monthlyInt = annualInt / 12;
	 if (balance > 0) {// ensures that interest is only added if the account has money in it
		 double add = balance * monthlyInt;
		 balance = balance + add;
	 }
	 else if (balance <= 0) {
		 balance = balance; 
	 }

 }
 void Account::monthlyProc() {
	 balance = balance - monthlyServ;
	 calcInt();
	 monthlyWithdrawals = 0;
	 monthlyDeposits = 0;
	 monthlyServ = 0;

 }
Account::~Account()
{
}
