
#include"Account.h"
#include"Account_util.h"
#include"Checking_Account.h"
#include"Savings_Account.h"
#include"Trust_Account.h"
#include <iostream>


/*void do_withdraw(Account& account, double amount) {
	account.withdraw(amount);
}*/
int main() {
	Savings_Account s{"Frank",5000.0,2.6};
	std::cout << s<<std::endl;

	Account* trust = new Trust_Account("James");
	std::cout << *trust;
	delete trust;
	

	system("pause");
}

