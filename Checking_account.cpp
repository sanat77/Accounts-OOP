#include "Checking_account.hpp"
#include <iostream>
#include <string>

std::ostream &operator<<(std::ostream &os, const Checking_account &account) {
	os<<"[Checking Account: "<<account.name<<": "<<account.balance<<", "<<account.convenience_fee<<"]";
	return os;
}
Checking_account::Checking_account(std::string name, double balance)
    :Account{name,balance} {		
}

bool Checking_account::withdraw(double amount) {
	amount+=convenience_fee;
	return Account::withdraw(amount);
}