#include "Circulo.h"
#include "Rectangulo.h"

int main()
{
	Circulo *c;
	c = new Circulo(0, 0, 13);

   Rectangulo *r;
   r = new Rectangulo(0, 0, 12, 13);

   cout << "Area " << c->area() << endl;

   Figura *f[2];
   f[0] = c;
   f[1] = r;

   for (int i = 0; i < ARRAY_SIZE; i++)
   {
	   cout << "A: " << f[i]->area() << endl;
   }

   cout<<"------------"<<endl<<endl;

   //int a;
   //cin >> a;
}
