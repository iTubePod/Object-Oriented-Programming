#include <iostream>
using namespace std;
void triangulo (int in);

int main ()
{
	int in;
	cout<<"Dame un numero"<<endl;
	cin>>in;
	triangulo(in);
	return 0;
}
void triangulo (int in)
{
	char star= '*';
	if (in==1)
	{
		cout<<star<<endl;
	}
	else
	{	
		for (int i = in; i>0; i--)
		{
			cout<<star;
		}
		cout<<" "<<endl;
		return triangulo(in-1);
	}
}
