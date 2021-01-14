#include "Trust_account.hpp"
#include "Savings_account.hpp"
#include <iostream>
#include <string>

Trust_account::Trust_account(std::string name, double balance, double int_rate)
    :Savings_account{name, balance, int_rate} {		
}
bool Trust_account::deposit(double amount) {
	if(amount>=5000) {
		amount+=bonus;
	    return Savings_account::deposit(amount);
	} 
	return Savings_account::deposit(amount);
}
bool Trust_account::withdraw(double amount) {
	if(amount<(0.2*balance)&&num_withdrawls>0) {
		--num_withdrawls;
		return Savings_account::withdraw(amount);
	}
	return false;
}
std::ostream &operator<<(std::ostream &os, const Trust_account &account) {
	os<<"[Trust Account: "<<account.name<<", "<<account.balance<<", "<<account.int_rate<<", "<<account.bonus<<", "<<account.num_withdrawls<<"]";
	return os;
}
