#include <fstream>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <time.h>  
#include <iomanip>

#ifndef CUSTOMER
#define CUSTOMER

using namespace std;
using std::vector;
using std::string;

class Customer
{
public:
	long long int Account_ID;
	vector <long double> transactions;

	string name;
	string adress;

	long double balance;

	Customer(string n, string s, string a);
	Customer();

	void setName(string n, string s);
	string getName();

	void setAdress(string a);
	string getAdress();

	void generate_Account_ID();
	int getAccount_ID();

	void setBalance(float mon);
	long double getBalance();

	void deposit();
	void withdrawal();
	void all_Transactions();

	void setAll(string n, string a, int a_ID, float b, vector<long double>& t);

};
#endif


 