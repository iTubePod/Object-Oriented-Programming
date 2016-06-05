#include "Customer.h"
#include "Bank.h"
#include <ctime>


Customer::Customer(string n, string s, string a)
{
	setName(n, s);
	setAdress(a);
	cout << "Customer successfully added" << endl;
	cout << "Now generating account... Please Wait" << endl;
	generate_Account_ID();
	cout << "Account successfully generated, ID: " << Account_ID << endl;
	cout << "Enter the initial deposit amount" << endl;
	deposit();
	cout << "Account setup completed" << endl;

}
Customer::Customer()
{
}
void Customer::setName(string n, string s)
{
	name = n;
}
string Customer::getName()
{
	return name;
}

void Customer::setAdress(string a)
{
	adress = a;
}
string Customer::getAdress()
{
	return adress;
}
void Customer::generate_Account_ID()
{
	time_t t = time(0);   // get time now
	struct tm * now = localtime(&t);
	srand(time(NULL));
	Account_ID = (rand() % 100000)*(now->tm_sec) + (now->tm_mday) + (now->tm_year+1900);
	/*
	vector <int> ID;
	time_t t = time(0);   // get time now
	struct tm * now = localtime(&t);
	Account_ID.push_back(now->tm_year + 1900);
	Account_ID.push_back(now->tm_min);
	Account_ID.push_back(now->tm_sec);
	Account_ID.push_back(now->tm_hour);
	Account_ID.push_back(now->tm_mday);
	Account_ID.push_back(now->tm_mon + 1);
	*/
}

int Customer::getAccount_ID()
{
	return Account_ID;
}

void Customer::setBalance(float mon)
{
	balance = balance+mon;
}

long double Customer::getBalance()
{
	return balance;
}

void Customer::deposit()
{
	float trans;
	cout << "______________________________________________________________" << endl;
	cout << "Enter the amount to deposit with cents" << endl;
	cout << "	>";
	cin >> trans;
	setBalance(trans);
	cout << "Success, $" << trans << " added to account no. " << Account_ID << endl;
	cout << "New Balance: " << fixed << setprecision(2) << getBalance() << endl;
	transactions.push_back(trans);
	cout << "______________________________________________________________" << endl;
}
void Customer::withdrawal()
{
	cout << "______________________________________________________________" << endl;
	float trans;
	cout << "Enter the amount to withdraw with cents" << endl;
	cout << "	>";
	cin >> trans;
	if (trans>getBalance())
	{
		cout << "Insufficient funds" << endl;
		cout << "______________________________________________________________" << endl;
	}
	else
	{
		trans = -trans;
		setBalance(trans);
		cout << "Success, $" << trans << " withdrawed from account no. " << Account_ID << endl;
		cout << "New Balance: " << fixed << setprecision(2) << getBalance() << endl;
		transactions.push_back(trans);
		cout << "______________________________________________________________" << endl;
	}
}

void Customer::all_Transactions()
{
	cout << "______________________________________________________________" << endl;
	for (int i = 0; i < transactions.size(); i++)
	{
		if (transactions[i]>0)
			cout << "Deposit:	" << fixed << setprecision(2) << transactions[i] << endl;
		else
			cout << "Withdrawal:	" << fixed << setprecision(2) << transactions[i] << endl;
	}
}

void Customer::setAll(string n, string a, int a_ID, float b, vector<long double>& t)
{
	name = n;
	adress = a;
	Account_ID = a_ID;
	balance = b;
	transactions = t;
}
