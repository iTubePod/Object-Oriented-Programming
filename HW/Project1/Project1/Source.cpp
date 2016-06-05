#include <iostream>

using namespace std;
int suma(int n);
float potencia(float x, int n);
int mcm(int a, int b);
int mcd(int a, int b);

int main()
{
	int menu = 1;
	int a, b, n;
	float x;

	while (menu != 0)
	{
		cout << "Elige una opcion:" << endl << endl << "1. Suma de los primeros 'n' numeros enteros" << endl << "2. Elevar un numero 'x' a la potencia 'n'" << endl << "3. Calcuar el minimo comun multiplo de dos numeros" << endl << "0. Salir" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
			cout << "Escriba un numero" << endl;
			cin >> n;
			int res;
			res = suma(n);
			cout << "La suma de los primeros " << n << " números es " << res << endl;
			break;
		case 2:
			cout << "Elija la base(x) y el exponente(n) separados por un 'enter'." << endl;
			cin >> x >> n;
			float resu;
			resu = potencia(x, n);
			cout << x << " elevado a la " << n << " potencia " << "es " << resu << endl;
			break;
		case 3:
			cout << "Elija los numeros de los cuales quieres sacar el minimo comun multiplo separados por un 'enter'." << endl;
			cin >> a >> b;
			int re;
			re = mcm(a, b);
			cout << "El minimo comun multiplo de " << a << " y " << b << " es " << re << endl;
			break;
		case 0:
			cout << "Programa terminado" << endl;
			return 0;
		default:
			cout << "Opcion no valida. Intenta de nuevo." << endl;
		}
	}
}
int suma(int n)
{
	static int res = 0;
	res += n;
	if (n>0)
	{
		return suma(n - 1);
	}
	else
	{
		return res;
	}
}
float potencia(float x, int n)
{
	static float res = x;
	if (n == 0)
	{
		cout << res;
		return res;
	}
	else
	{
		res = res * x;
		potencia(x, n - 1);
	}
}
int mcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return mcd(b, (a%b));
	}
}
int mcm(int a, int b)
{
	int res;
	res = (a*b) / mcd(a, b);
	return res;
}