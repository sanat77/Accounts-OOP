#include "Account_vector.hpp"
#include <iostream>
#include <string>
#include <vector>

//Account

void display(std::vector <Account> &account) {
	for(const auto &acc: account)
		std::cout<<acc<<std::endl;
}
void deposit(std::vector <Account> &account, double amount) {
	for (auto &acc: account) {
		if (acc.deposit(amount))
			std::cout<<"Deposited "<<amount<<" to "<<acc<<std::endl;
		else
			std::cout<<"Failed to deposit "<<amount<<" to "<<acc<<std::endl;
	}
}
void withdraw(std::vector <Account> &account, double amount) {
	for (auto &acc:account) {
		if (acc.withdraw(amount))
			std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Failed to withdraw "<<amount<<" from "<<acc<<std::endl;
	}
}

//Savings Account

void display(std::vector <Savings_account> &account) {
	for (const auto &acc: account)
		std::cout<<acc<<std::endl;
}
void deposit(std::vector <Savings_account> &account, double amount) {
	for (auto &acc: account) {
		if (acc.deposit(amount))
			std::cout<<"Deposited "<<amount<<" to "<<acc<<std::endl;
		else
			std::cout<<"Failed to deposit "<<amount<<" to "<<acc<<std::endl;
	}
}
void withdraw(std::vector <Savings_account> &account, double amount) {
	for (auto &acc:account) {
		if (acc.withdraw(amount))
			std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Failed to withdraw "<<amount<<" from "<<acc<<std::endl;
	}
}

//Checking account

void display(std::vector <Checking_account> &account) {
	for(const auto &acc:account)
		std::cout<<acc<<std::endl;
}
void deposit(std::vector <Checking_account> &account, double amount) {
	for (auto &acc: account) {
		if (acc.deposit(amount))
			std::cout<<"Deposited "<<amount<<" to "<<acc<<std::endl;
		else
			std::cout<<"Failed to deposit "<<amount<<" to "<<acc<<std::endl;
	}
}
void withdraw(std::vector <Checking_account> &account, double amount) {
	for (auto &acc:account) {
		if (acc.withdraw(amount))
			std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Failed to withdraw "<<amount<<" from "<<acc<<std::endl;
	}
}

//Trust account

void display(std::vector <Trust_account> &account) {
	for(const auto &acc:account)
		std::cout<<acc<<std::endl;
}
void deposit(std::vector <Trust_account> &account, double amount) {
	for (auto &acc: account) {
		if (acc.deposit(amount))
			std::cout<<"Deposited "<<amount<<" to "<<acc<<std::endl;
		else
			std::cout<<"Failed to deposit "<<amount<<" to "<<acc<<std::endl;
	}
}
void withdraw(std::vector <Trust_account> &account, double amount) {
	for (auto &acc:account) {
		if (acc.withdraw(amount))
			std::cout<<"Withdrew "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Failed to withdraw "<<amount<<" from "<<acc<<std::endl;
	}
}