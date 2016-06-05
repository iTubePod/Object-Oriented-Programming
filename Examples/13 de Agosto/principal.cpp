#include "Gato.h"

int main()
{
   cout<<"Ejemplo con una clase"<<endl;


   //garfiedl es el nombre de la variable del tipo Gato
   Gato garfield;

   garfield.setNombre("Garfield");
   garfield.setEdad(5);
   garfield.setPeso(10);

   int x = garfield.getPeso();

   cout<<"El gato pesa "<<x<<endl;

   garfield.come("croquetas");
}
