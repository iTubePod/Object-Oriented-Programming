#include <iostream>

using namespace std;
int mayor (int tri[100], int n);

int main()
{
	int i=0;
	int n;
	cin>>n;
	int tri[100]=0;
	int suma=0;
	for (;i <=n; i++)
	{
		cin>>tri[i];
		suma=suma+mayor (&tri[100], n);
		cout<<suma<<endl;
	}
}
int mayor (int tri[100], int n)
{
	int may;
	if (n==1)
	{
		may=tri[n];
		return may;
	}
	else
	{
		if (tri[n]>tri[n+1])
		{
			may=tri[n];
			return may;
		}
		else
		{
			may=tri[n+1];
			return may;
		}
	}
}