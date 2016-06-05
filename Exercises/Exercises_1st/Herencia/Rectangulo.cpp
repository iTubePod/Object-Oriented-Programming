#include "Rectangulo.h"

   Rectangulo::Rectangulo()
   {
     alto = 0;
     ancho = 0;
     cout<<"Constructor rect1"<<endl;
   }

   Rectangulo::Rectangulo(int x, int y, int al, int an)
   {
     centroX = x;
     centroY = y;
     alto = al;
     ancho = an;
     cout<<"Constructor rect2"<<endl;
   }

   int Rectangulo::getancho()
   {
      return an;
   }
   int Rectangulo::getalto()
   {
      return al;
   }
 
   void Rectangulo::setAlto(int al)
   {
     alto = al;
   }

   void Rectangulo::setAncho(int an)
   {
     ancho = an;
   }

  
   float Rectangulo::area() 
   {
      cout<<"Area del rectangulo"<<endl;
      Figura::area();
      return (ancho*alto);
   }
