#ifndef SAVINGS_ACCOUNT_HPP
#define SAVINGS_ACCOUNT_HPP
#include "Account.hpp"
#include <iostream>
#include <string>

class Savings_account: public Account {
protected:
    double int_rate;
	friend std::ostream &operator<<(std::ostream &os, const Savings_account &account); 
public:
	Savings_account(std::string name="Unnamed Savings Account",double balance=0, double int_rate=0);
	bool deposit(double amount);
};

#endif // SAVINGS_ACCOUNT_HPP
