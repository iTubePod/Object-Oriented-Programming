#include <iostream>
#include <vector> //Debe incluir <vector> para poder usar vectores
#include <string>
#include "Cosa.h"

using namespace std;

int main()
{
  vector <string> v; //#include <vector>, v es el nombre de la variable 

  v.push_back("zarzamora");//v_push inserta elementos al vinal del vector, en cada posicion [0], [1], [2]
  v.push_back("platano");
  v.push_back("manzana");

  cout<<"Elementos del vector "<<v.size()<<endl;

  v.push_back("mango");
  v.push_back("fresa");

  for(int i=0; i<v.size(); i++) ///.size() imprime el numero de elementos de incluidos dentro del vector
     cout<<i<<": "<<v[i]<<endl;

  v.pop_back();                 //pop_back quita el ultimo el elemento
  cout<<"Despues de quitar el ultimo: "<<endl;

  for(int i=0; i<v.size(); i++)
     cout<<i<<": "<<v[i]<<endl;

  //Insertar sandia en la posicion 1
  v.insert(v.begin()+1,"sandia");

  cout<<"Despues de insertar sandia:"<<endl;

  for(int i=0; i<v.size(); i++)
     cout<<i<<": "<<v[i]<<endl;


  v.push_back("durazno");

  cout<<"Despues de insertar durazno:"<<endl;

  for(int i=0; i<v.size(); i++)
     cout<<i<<": "<<v[i]<<endl;

  cout<<"Despues de borrar manzana:"<<endl;
  v.erase(v.begin()+3,v.begin()+4); //"los paratetros indican el RANGO"primer parametro el primer elemento a volar y el segundo el valor siguiente al ultimo a borrar

  for(int i=0; i<v.size(); i++) //imprime el vector
     cout<<i<<": "<<v[i]<<endl;

  /*------------------------------------------------*/
  vector <Cosa *>things; 

  things.push_back(new Cosa());
  things[0]->setNombre("Playera");
  things[0]->setTalla(6);

  things.push_back(new Cosa());
  things[1]->setNombre("Chaleco");
  things[1]->setTalla(13);

  for(int i=0; i<things.size(); i++)
  {
     cout<<i<<": "<<things[i]->getNombre()<<", "<<things[i]->getTalla()<<endl;
  }

  return 0;
}
