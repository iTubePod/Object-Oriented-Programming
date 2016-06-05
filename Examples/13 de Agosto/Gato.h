#include <iostream>
#include <string>

using namespace std;

class Gato {

public:

   //Atributos
   string nombre;
   int edad;
   float peso;

   //Constructor
   Gato();

   //Metodos get y set para modificar atributos

   string getNombre();
   void setNombre(string n);

   int getEdad();
   void setEdad(int e);

   float getPeso();
   void setPeso(float p);

  //Otros metodos
  void come(string comida);

};
