#include "iostream"

using namespace std;

void CuentaRegresiva (int n)
{
	cout<< n <<endl;
	if (n == 0)
		return;
	else 
		CuentaRegresiva(n-1);
}
int main ()
{
	CuentaRegresiva(3);

	int a;
	cin >> a;
	return 0;
}