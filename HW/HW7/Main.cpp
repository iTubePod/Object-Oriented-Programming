#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int busbinrec(vector <string> binbox, int min, int max, string x);
void busbin(vector <string> binbox, string x);

int main()
{
	vector <string> binbox;
	int op;
	int loop = 1;
	string spot;

	cout << "H. Mauricio Gonzalez Coello\nA01328258" << endl;

	//Llena el vector de nombres
	string in;
	cout << "Introduce los nombres necesarios, para terminar teclea --" << endl;
	cin >> in;
	while (in != "--")
	{
		binbox.push_back(in);
		cin >> in;
	}

	//Ordena alfabeticamente el vector
	sort(binbox.begin(), binbox.end());

	int min = 0;
	int max = binbox.size();

	//Menu
	while (loop != 0)
	{
		cout << "BUSQUEDA BINARIA\n	1. Recursivo\n	2.No Recursivo\n	3. Salir" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "Inserta la palabra a buscar" << endl;
			cin >> spot;
			busbinrec(binbox, min, max, spot);
			loop = 1;
			break;
		case 2:
			cout << "Inserta la palabra a buscar" << endl;
			cin >> spot;
			busbin(binbox, spot);
			loop = 1;
			break;
		case 3:
			cout << "Fin del programa" << endl;
			loop = 0;
			break;
		default:
			cout << "Opcion invalida" << endl;
			loop = 1;
			break;
		}
	}
}
int busbinrec(vector <string> binbox, int min, int max, string x)
{
	if (min > max)
	{
		cout << "Ningun resultado" << endl;
	}
	int med;
	while (min <= max)
	{
		med = (max + min) / 2;
		if (binbox[med] == x)
		{
			cout << x << " encontrado en la posicion " << med << endl;
			min = max + 1;
		}

		else if (binbox[med] < x)
		{
			return busbinrec(binbox, med + 1, max, x);
		}
		else
		{
			return busbinrec(binbox, min, med - 1, x);
		}
	}
}

void busbin(vector <string> binbox, string x)
{
	int min = 0;
	int max = binbox.size();
	int med;
	med = (max + min) / 2;
	while (min <= max)
	{	
		med = (max + min) / 2;
		if (binbox[med] == x)
		{
			cout << x << " encontrado en la posicion " << med << endl;
			min = max + 1;
		}

		else if (binbox[med] < x)
		{
			min = med + 1;
		}
		else
		{
			max = med - 1;
		}
	}
	if (min > max)
	{
		cout << "Ningun resultado" << endl;
	}
}