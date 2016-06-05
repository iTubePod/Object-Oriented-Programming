#include <iostream>
#include <math.h>

using namespace std;

int Sumatoria(int n);
int Potencia(float x, int n);
int MCM(int n, int m);
int MCD(int n, int m);
int main()
{
	int op = 0;
	int n, m;
	float x;
	cout << "\nTarea 3\n\nHector Mauricio Gonzalez Coello\n\nA01328258" << endl;
	while (op >= 0)
	{
		switch (op)
		{
		case 0:
			cout << "_________________________________\n" << endl;
			cout << "1. Sumatoria\n2. Potencia\n3. Minimo comun multiplo\nSalir (-1)" << endl;
			cout << "_________________________________\n" << endl;
			cin >> op;
			break;
		case 1:
			cout << "Hasta que numero quieres calcular?" << endl;
			cin >> n;
			cout << Sumatoria(n) << endl;
			op = 0;
			break;
		case 2:
			cout << "Que valor quieres elevar?" << endl;
			cin >> x;
			cout << "A que potencia lo quieres elevar?" << endl;
			cin >> n;
			cout << Potencia(x, n) << endl;
			op = 0;
			break;
		case 3:
			cout << "Dame el primer numero" << endl;
			cin >> n;
			cout << "Dame el segundo numero" << endl;
			cin >> m;
			cout << MCM(n, m) << endl;
			op = 0;
			break;
		default:
			cout << "Opcion invalida" << endl;
			op = 0;
			break;
		}
	}
}
int Sumatoria(int n)
{
	int sum = 0;
	if (n == 0)
	{
		return 0;
	}
	else
	{
		return n + Sumatoria(n-1);
	}
}
int Potencia(float x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return x * Potencia(x, n - 1);
	}
	return 0;
}
int MCM(int n, int m)
{
	if (n > m)
	{
		return (n*m) / MCD(n, m);
	}
	else
	{
		return (n*m) / MCD(m, n);
	}
	}
int MCD(int n, int m)
{
	int a = n/m;
	int b = n%m;

	if (b == 0)
	{
		return m;
	}
	else
	{
		return MCD(m, b);
	}
}