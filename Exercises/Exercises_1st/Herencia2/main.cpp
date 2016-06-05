#include "Circulo.h"
#include "Rectangulo.h"

int main()
{
   Circulo c(2,3,4);
   cout<<"El area del circulo es "<<c.area()<<endl;
   cout<<"El area del circulo es "<<c.area(8)<<endl;


   cout<<"Centro: "<<c.getCentroX()<<", "<<c.getCentroY()<<endl;
   cout<<"Radio: "<<c.getRadio()<<endl;
   cout<<" "<<endl;


   cout<<"------------"<<endl<<endl;

   Rectangulo r;
   r.setAncho(13);
   r.setAlto(1);
   r.imprimir();
   cout<<"El are del rec "<<r.area()<<endl;

   cout<<"------------"<<endl<<endl;

}
