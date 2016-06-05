#include "Circulo.h"
#include "Figura.h"

class Rectangulo : public Figura {
 private:
   int alto;
   int ancho;

 public:
   Rectangulo();
   Rectangulo(int x, int y, int al, int an);

   int Rectangulo::getancho();
   int Rectangulo::getalto();


   void Rectangulo::setAlto(int al);
   void Rectangulo::setAncho(int an);

  
   float area(); 
};
