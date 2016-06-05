#include <fstream>
#include <vector>
#include <iostream>
#include <sstream>//separa en renglones

using namespace std;
using std::vector;
using std::string;

int main()
{
   vector<string> name;
   ifstream archivo_entrada;
   char linea[128];
   int i=0;

   archivo_entrada.open("bitacora.txt");//abre archivo

   if(archivo_entrada.fail())
   {
      cout<<"Error al abrir el archivo"<<endl;
      return 0;
   }

   while(!archivo_entrada.eof())//mientras ni sea fin del archivo
   {

    archivo_entrada.getline(linea,sizeof(linea));//te trae linea por linea
    cout<<i<<": "<<linea<<endl;
    i++;

    string str(linea);
     
    istringstream iss(str);
    string sub;
    iss >> sub;
    name.push_back(sub);
  }

  ofstream archivo_salida;
  archivo_salida.open("datos.txt");
  sort(name.begin(), name.end());
  int elements=0;

  for (int n=1; n < name.size(); n++)
  {
  int nm=1;

  while (name[n] == name[n+1])
  {  
    nm++;
    n++;
  }

   archivo_salida << name[n]<<": "<<nm<<" times."<<endl;
   elements++;
}
  cout<<elements<<" elements analized"<<endl;

   archivo_salida.close();
   archivo_entrada.close();

   return 0;
}
