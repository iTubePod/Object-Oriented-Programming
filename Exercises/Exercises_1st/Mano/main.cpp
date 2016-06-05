#include "Mano.h"

int main()
{
  Mano *m = new Mano();

  Dedo *uno = new Dedo();
  uno->setX(4);
  uno->setY(3);
  uno->setZ(55);

  m->setIndice(uno);

  cout<<"Posicion del dedo indice en x es "<<m->getIndice()->getX()<<endl;
  cout<<"Posicion del dedo indice en z es "<<m->getIndice()->getZ()<<endl;
  return 0;
}
