#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP
#include <iostream>
#include <string>

class Account {
protected:
    double balance;
	std::string name;
	friend std::ostream &operator<<(std::ostream &os, const Account &account);
public:
	Account(std::string name="Unnamed Account", double balance=0);
	bool deposit(double amount);
	bool withdraw(double amount);
	double get_balance() {return balance;}
};

#endif // ACCOUNT_HPP
