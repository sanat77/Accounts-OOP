#ifndef TRUST_ACCOUNT_HPP
#define TRUST_ACCOUNT_HPP
#include <iostream>
#include <string>
#include "Savings_account.hpp"

class Trust_account: public Savings_account {
protected:
    double bonus{50};
	int num_withdrawls{3};
	friend std::ostream &operator<<(std::ostream &os, const Trust_account &account);
public:
	Trust_account(std::string name="Unnamed Trust Account", double balance=0, double int_rate=0);
	bool deposit(double amount);
	bool withdraw(double amount);
};

#endif // TRUST_ACCOUNT_HPP
