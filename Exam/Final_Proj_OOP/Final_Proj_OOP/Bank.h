#include "Customer.h"


class Bank
{
public:

	int an = 0;
	unsigned long long int l;
	string n, a;
	long long int a_ID;
	long double b;
	int count;
	long double transaction;
	vector<long double> t;
	int i = 0;

	Bank();

	void BSys();
	void menu();
	void trans_menu();
	int startup();
	int shutdown();
	vector <Customer *> customer_list;
	int search(int look);
	void rep_menu();
};

