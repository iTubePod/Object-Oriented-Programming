#include "Bank.h"


Bank::Bank()
{
	BSys();
}

void Bank::BSys()
{
	int loop = 10;
	int sw, look, con, f_op;
	int rep;
	bool w, d;
	string name, sourname, adress;
	cout << "______________________________________________________________" << endl;
	cout << "STARTING SYSTEM UP..." << endl;
	startup();
	while (loop != 0)
	{
		menu();
		cin >> sw;
		switch (sw)
		{
		case 1:
		{
			cout << "Enter customer name [NO SPACES] (Name)" << endl;
			cout << "	>";
			cin >> name;
			cout << "Enter customer adress [NO SPACES] (Street, Number, City, State)" << endl;
			cout << "	>";
			cin >> adress;
			Customer *C = new Customer(name, sourname, adress);
			customer_list.push_back(C);
			cout<<customer_list.size()<<" customers registered to date"<<endl;
			loop = 1;
			break;
		}
		case 2:
			rep = 0;
			cout << "Enter Account ID" << endl;
			cin >> look;
			con=search(look);
			if (con>=0)
			{
				cout << "Account ID "<<customer_list[con]->getAccount_ID()<< " found!" << endl;
				cout << "Current balance: " <<fixed<<setprecision(2)<< customer_list[con]->getBalance() << endl;
				while (rep == 0)
				{
					trans_menu();
					cin >> f_op;
					switch (f_op)
					{
					case 1:
						customer_list[con]->deposit();
						break;
					case 2:
						customer_list[con]->withdrawal();
						break;
					case 3:
						customer_list[con]->all_Transactions();
					case 4:
						rep = 1;
						break;
					default:
						break;
					}
				}
			}
			else
				cout << "Account ID especified does not exist" << endl;
			break;
		case 3:
			for (int i = 0; i < customer_list.size(); i++)
			{
				cout << "______________________________________________________________" << endl;
				cout << "Account ID: " << customer_list[i]->getAccount_ID() << endl;
				cout << "Name: " << customer_list[i]->getName() << endl;
				cout << "Adress: " << customer_list[i]->getAdress() << endl;
				cout << "Balance: " << fixed << setprecision(2) << customer_list[i]->getBalance() << endl;
				cout << "______________________________________________________________" << endl;
			}
			break;
		case 4:
			rep = 0;
			while (rep == 0)
			{
				rep_menu();
				cin >> f_op;
				switch (f_op)
				{
				case 1:
					cout << "Enter Account ID" << endl;
					cin >> look;
					con = search(look);
					if (con >= 0)
					{
						cout << "Account ID " << customer_list[con]->getAccount_ID() << " found!" << endl;
						cout << "Current balance: " << fixed << setprecision(2) << customer_list[con]->getBalance() << endl;
						customer_list[con]->all_Transactions();
					}
					else
						cout << "Account ID especified does not exist" << endl;
					break;
				case 2:
					for (int i = 0; i < customer_list.size(); i++)
					{
						d = false;
						if (customer_list[i]->transactions.size()>0)
						{
							cout << "______________________________________________________________" << endl;
							cout << "Account ID: " << customer_list[i]->getAccount_ID() << " Name:" << customer_list[i]->getName() << endl;
							for (int j = 0; j < customer_list[i]->transactions.size(); j++)
							{
								if (customer_list[i]->transactions[j]>0)
								{
									cout << "	Deposit: " << fixed << setprecision(2) << customer_list[i]->transactions[j] << endl;
									d = true;
								}
							}
						}
						if (!d)
						{
							cout << "	No Deposits Registered on Account" << endl;
						}
					}
					break;
				case 3:
					for (int i = 0; i < customer_list.size(); i++)
					{
						w = false;
						if (customer_list[i]->transactions.size()>0)
						{
							cout << "______________________________________________________________" << endl;
							cout << "Account ID: " << customer_list[i]->getAccount_ID() << " Name:" << customer_list[i]->getName() << endl;
							for (int j = 0; j < customer_list[i]->transactions.size(); j++)
							{
								if (customer_list[i]->transactions[j] < 0)
								{
									cout << "	Withdrawal: " << fixed << setprecision(2) << customer_list[i]->transactions[j] << endl;
									w = true;
								}
							}
						}
						if (!w)
						{
							cout << "	No Withdrawals Registered on Account" << endl;
						}
					}
					break;
				case 4:
					rep = 1;
					break;
				default:
					break;
				}
			}
			break;
		case 5:
			cout << "Finalizing..." << endl;
			shutdown();
			loop = 0;
		default:
			break;
		}
	}
}

void Bank::menu()
{
	cout << "______________________________________________________________" << endl;
	cout << "What operation do you want to execute?" << endl;
	cout << "	1. Add new Customer" << endl;
	cout << "	2. Access Specific Account" << endl;
	cout << "	3. Show All Active Accounts" << endl;
	cout << "	4. Generate System Report" << endl;
	cout << "	5. Exit" << endl;
	cout << "	>";
}

void Bank::trans_menu()
{
	cout << "______________________________________________________________" << endl;
	cout << "What operation do you want to execute?" << endl;
	cout << "	1. Deposit" << endl;
	cout << "	2. Withdraw" << endl;
	cout << "	3. Show all transactions" << endl;
	cout << "	4. Return to Main Menu" << endl;
	cout << "	>";
}

int Bank::startup()
{
	cout << "LOADING DATABASE..." << endl;
	int i = 0;
	ifstream bank_database;
	bank_database.open("bnkdb.txt", std::ofstream::in);
	if (bank_database.fail())
	{
		cout << "FATAL ERROR [DataBase is corrupt]" << endl;
		return 0;
	}
	bank_database >> a_ID;
	while (a_ID!=-1)
	{
		Customer *x = new Customer();
		bank_database >> n;
		bank_database >> a;
		bank_database >> b;
		bank_database >> count;
		for (int i = 0; i < count; i++)
		{
			bank_database >> transaction;
			t.push_back(transaction);
		}
		x->setAll(n, a, a_ID, b, t);
		customer_list.push_back(x);
		an++;
		bank_database >> a_ID;
		t.clear();
	}
	cout << an << " accounts successfully added" << endl;
	bank_database.close();
	return 0;
}

int Bank::shutdown()
{
	cout << "UPDATING DATABASE..." << endl;
	ofstream bank_database;
	bank_database.open("bnkdb.txt");//, std::ofstream::out | std::ofstream::trunc);

	for (int i = 0; i < customer_list.size(); i++)
	{
		bank_database << customer_list[i]->getAccount_ID() <<" "<< customer_list[i]->getName() << " " << customer_list[i]->getAdress() << " " <<fixed << setprecision(2) << customer_list[i]->getBalance() << " " << customer_list[i]->transactions.size() << " ";
		for (int j = 0; j < customer_list[i]->transactions.size(); j++)
		{
			bank_database << fixed << setprecision(2) << customer_list[i]->transactions[j] << " ";
		}
		bank_database << endl;
	}
	bank_database << EOF;
	bank_database.close();
	return 0;
}

int Bank::search(int look)
{
	bool res=false;
	int ret;
	int i = 0;
	while (i<customer_list.size() && !res)
	{
		if (customer_list[i]->getAccount_ID() == look)
		{
			ret = i;
			res = true;
			return ret;
		}
		else
		{
			i++;
			res = false;
		}
	}
	if (res == false)
	{
		return -1;
	}

}
void Bank::rep_menu()
{
	cout << "______________________________________________________________" << endl;
	cout << "What operation do you want to execute?" << endl;
	cout << "	1. Show all transactions by account" << endl;
	cout << "	2. Show all deposits" << endl;
	cout << "	3. Show all withdrawals" << endl;
	cout << "	4. Return to Main Menu" << endl;
	cout << "	>";
}
