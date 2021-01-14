#include "Savings_account.hpp"
#include <iostream>
#include <string>
//#include "Account.hpp"

Savings_account::Savings_account(std::string name, double balance, double int_rate)
    :Account{name, balance}, int_rate{int_rate} {
}
bool Savings_account::deposit(double amount) {
	if(amount>0) {
	    amount+=(amount*int_rate)/100;
        return Account::deposit(amount);
	}
	return false;
}
std::ostream &operator<<(std::ostream &os, const Savings_account &account) {
	os<<"[Savings Account: "<<account.name<<": "<<account.balance<<", "<<account.int_rate<<"%";
	return os;
}

