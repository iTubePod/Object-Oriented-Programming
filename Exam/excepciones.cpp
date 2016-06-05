#include <fstream>
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class myexception: public exception
{
  virtual const char* what() const throw()
  {
    return "Nombre invalido";
  }
} myex;

bool revisaNombre(string b)
{
	if (b[0] == 'A' && (b[1] == '0' || b[1] == '1' || b[1] == '2' || b[1] == '3' || b[1] == '4' || b[1] == '5' || b[1] == '6' || b[1] == '7' || b[1] == '8' || b[1] == '9'))
	{
		return true;
	}
	else
		return false;
}

int main()
{
	ifstream archivo_entrada;
	string nombre;
	cout << "dame el nombre del archivo" << endl;
	cin >> nombre;
   try {
	   if (revisaNombre(nombre))
	   {
		   archivo_entrada.open(nombre);
		   ofstream archivo_salida;
		   for (int i = 0; i <= 10; i++)
		   {
			   archivo_salida << i << endl;
		   }	
		   cout << "Success" << endl;
	   }
   }
   catch(exception& e){
      cout<<e.what()<<endl;
	  int loop;
	  cin >> loop;
   }
   return 0;   
}
