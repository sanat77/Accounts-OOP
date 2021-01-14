#include <stdio.h>
#include <iostream>
#include "Account.hpp"
//#include "Savings_account.hpp"
//#include "Checking_account.hpp"
//#include "Trust_account.hpp"
#include <vector>
#include <string>
#include "Account_vector.hpp"
using namespace std;

int main(int argc, char **argv)
{
/*	cout<<"=======Account============================="<<endl;
	Account a1(1000);
	cout<<a1<<endl;
	a1.deposit(100);
	cout<<a1<<endl;
	a1.withdraw(500);
	cout<<a1<<endl;
	a1.withdraw(700);
	cout<<a1<<endl;
	cout<<"=======Savings Account====================="<<endl;
	Savings_account s1(1500,5);
	cout<<s1<<endl;
	s1.deposit(1000);
	cout<<s1<<endl;
	s1.withdraw(500);
	cout<<s1<<endl;
	s1.withdraw(2500);
	cout<<s1<<endl;*/
	//Account
	vector <Account> account;
	account.push_back(Account{});
	account.push_back(Account{"Larry"});
	account.push_back(Account{"Moe",2000});
	account.push_back(Account{"Curly",5000});
	Account a1{"Sanat", 7000};       //both ways are right
	account.push_back(a1);
	display(account);
	deposit(account, 1000);
	withdraw(account, 3000);
	//Savings account
	vector <Savings_account> sav_acc;
	sav_acc.push_back(Savings_account{});
	sav_acc.push_back(Savings_account{"Larry"});
	sav_acc.push_back(Savings_account{"Moe", 2000});
	sav_acc.push_back(Savings_account{"Curly", 5000, 5});
	Savings_account s1 {"Sanat", 7000, 10};
	sav_acc.push_back(s1);
	display(sav_acc);
	deposit(sav_acc, 1000);
	withdraw(sav_acc, 3000);
	//checking account
	vector <Checking_account> check_acc;
	check_acc.push_back(Checking_account{});
	check_acc.push_back(Checking_account{"Larry"});
	check_acc.push_back(Checking_account{"Moe",20});
	check_acc.push_back(Checking_account{"Curly",10});
	Checking_account c1 {"Sanat", 7};
	check_acc.push_back(c1);
	display(check_acc);
	deposit(check_acc,2);
	withdraw(check_acc,4);
	//trust account
	vector <Trust_account> trust_acc;
	trust_acc.push_back(Trust_account{});
	trust_acc.push_back(Trust_account{"Larry"});
	trust_acc.push_back(Trust_account{"Moe",1000,10});
	trust_acc.push_back(Trust_account{"Curly",4000,5});
	Trust_account t1 {"Sanat", 7000, 20};
	trust_acc.push_back(t1);
	display(trust_acc);
	deposit(trust_acc,4000);
	deposit(trust_acc, 6000);
	withdraw(trust_acc, 500);
	withdraw(trust_acc, 400);
	withdraw(trust_acc, 300);
	withdraw(trust_acc, 200);
	return 0;
}
