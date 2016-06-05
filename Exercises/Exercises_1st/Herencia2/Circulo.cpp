#include "Circulo.h"

   Circulo::Circulo()
   {
     radio = 0;
     cout<<"Constructor cir1"<<endl;
   }

   Circulo::Circulo(int x, int y, int r) :Figura(x,y), radio(r)
   {
     cout<<"Constructor cir2"<<endl;
   }

   int Circulo::getRadio()
   {
      return radio;
   }
 
   void Circulo::setRadio(int r)
   {
     radio = r;
   }
  
   float Circulo::area() 
   {
      cout<<"Area del circulo"<<endl;
      return (3.14f * radio * radio);
   }
   float Circulo::area(int diametro)
   {
    cout<<"Area del circulo calculada con diametro "<<endl;
    return (3.14f*diametro*diametro /4.0f);
   }
