#ifndef ACCOUNT_VECTOR_HPP
#define ACCOUNT_VECTOR_HPP
#include <iostream>
#include <string>
#include <vector>
#include "Account.hpp"
#include "Savings_account.hpp"
#include "Checking_account.hpp"
#include "Trust_account.hpp"

//Account class
void display(std::vector <Account> &account);
void deposit(std::vector <Account> &account, double amount);
void withdraw(std::vector <Account> &account, double amount);

//Savings account
void display(std::vector <Savings_account> &account);
void deposit(std::vector <Savings_account> &account, double amount);
void withdraw(std::vector <Savings_account> &account, double amount);

//Checking account
void display(std::vector <Checking_account> &account);
void deposit(std::vector <Checking_account> &account, double amount);
void withdraw(std::vector <Checking_account> &account, double amount);

//Trust account
void display(std::vector <Trust_account> &account);
void deposit(std::vector <Trust_account> &account, double amount);
void withdraw(std::vector <Trust_account> &account, double amount);

#endif // ACCOUNT_VECTOR_HPP
