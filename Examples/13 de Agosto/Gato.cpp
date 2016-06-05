#include "Gato.h" 

   //Constructor
   Gato::Gato()
   {
      cout<<"Constructor del gato"<<endl;
   }

   //Metodos get y set para modificar atributos

   string Gato::getNombre()
   {
      return nombre;
   }

   void Gato::setNombre(string n)
   {
      nombre = n;
   }

   int Gato::getEdad()
   {
      return edad;
   }

   void Gato::setEdad(int e)
   {
      edad = e;
   }

   float Gato::getPeso()
   {
      return peso;
   }

   void Gato::setPeso(float p)
   {
      peso = p;
   }


  //Otros metodos
  void Gato::come(string comida)
  {
      cout<<"El gato "<<nombre<<" esta comiendo "<<comida<<endl;
  }
