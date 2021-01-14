#ifndef CHECKING_ACCOUNT_HPP
#define CHECKING_ACCOUNT_HPP
#include <iostream>
#include <string>
#include "Account.hpp"

class Checking_account: public Account {
protected:
    double convenience_fee {1.5};
	friend std::ostream &operator<<(std::ostream &os, const Checking_account &account);
public:
	Checking_account(std::string name="Unnamed Checking Account", double balance=0);
	bool withdraw(double amount);
};

#endif // CHECKING_ACCOUNT_HPP
