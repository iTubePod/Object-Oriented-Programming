#include <ctime>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector <int> Customer_ID;
	time_t t = time(0);   // get time now
	struct tm * now = localtime(&t);
	Customer_ID.push_back(now->tm_sec);
	Customer_ID.push_back(now->tm_year + 1900);
	Customer_ID.push_back(now->tm_mday);
	Customer_ID.push_back(now->tm_min);
	Customer_ID.push_back(now->tm_mon + 1);
	Customer_ID.push_back(now->tm_hour);



	for (int  i = 0; i < Customer_ID.size(); i++)
	{
		cout << Customer_ID[i];
	}
	int loop;
	cin >> loop;
}