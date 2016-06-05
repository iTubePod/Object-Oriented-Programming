#include <iostream>

using namespace std;

int factorial (int n)
{
	int r;
	if (n==1)
		return 1;
	else
		r=n*factorial(n-1);
		return r;
	return 0;
}

int main ()
{
	int n, res;
	cout<<"Que numero quieres calcular?"<<endl;
	cin>> n;
	res=factorial (n);
	cout<< res <<endl;
}