#include "contacto.h"
#include <cstdlib>
#define ARRAY_SIZE 10

void mainmenu ();
int main ()
{
	cout<<"Bienvenido a LifeInvader"<<endl;
	mainmenu();
	return 0;
}
void mainmenu ()
{
	contacto c[ARRAY_SIZE];
	int loop=1;
	int option;
	int contactos=0;
	string name,last,ema,numb;
	while (loop==1)
	{
		cout<<"1. Nuevo Contacto"<<endl;
		cout<<"2. Ver uno"<<endl;
		cout<<"3. Ver todos"<<endl;
		cout<<"4. Salir"<<endl;

		cout<<"Opcion: ";
		cin>>option;

		switch (option)
		{
			case 1:
				if (contactos<ARRAY_SIZE)
				{
				cout<<"____________________________"<<endl;
				cout<<"Nombre: ";
				cin>>name;
				c[contactos].setNombre(name);
				cout<<"Apellido: ";
				cin>>last;
				c[contactos].setApellido(last);
				cout<<"E-Mail: ";
				cin>>ema;
				c[contactos].setmail(ema);
				cout<<"Numero: ";
				cin>>numb;
				c[contactos].setnumero(numb);
				cout<<"Contacto añadido correctamente"<<endl;
				cout<<"____________________________"<<endl;
				contactos++;
				}
				else
				{
					cout<<"____________________________"<<endl;
					cout<<"Error, no se pueden añadir mas contactos por el momento"<<endl;
					cout<<"____________________________"<<endl;
				}
				break;
			case 2:
				int n, p;
				cout<<"Dame el numero de contactos que quieres que se muestren"<<endl;
				cin>>n;
				if (n>0 && n<=ARRAY_SIZE)
				{
				p=n-1;
				cout<<"____________________________"<<endl;
				cout<<"Contacto numero "<<p+1<<endl;
				cout<<"Nombre: "<<c[n].getNombre()<<endl;
				cout<<"Apellido: "<<c[n].getapellido()<<endl;
				cout<<"Telefono: "<<c[n].getnumero()<<endl;
				cout<<"E-Mail: "<<c[n].getmail()<<endl;
				cout<<"____________________________"<<endl;
				}
				else
				{
				cout<<"____________________________"<<endl;
				cout<<"Error, contacto inexistente"<<endl;
				cout<<"____________________________"<<endl;
				}
				break;
			case 3:
				for (int i=0; i<ARRAY_SIZE; i++)
				{
				cout<<"____________________________"<<endl;
				cout<<"Contacto numero "<<i+1<<endl;
				cout<<"Nombre: "<<c[i].getNombre()<<endl;
				cout<<"Apellido: "<<c[i].getapellido()<<endl;
				cout<<"Telefono: "<<c[i].getnumero()<<endl;
				cout<<"E-Mail: "<<c[i].getmail()<<endl;
				cout<<"____________________________"<<endl;
				}
				break;
			case 4:
				cout<<"HASTA LUEGO"<<endl;
				loop=0;
				break;

		}
	}
}