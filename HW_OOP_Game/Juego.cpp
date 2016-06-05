#include "juego.h"


Juego::Juego()
{
    dimX=10;
    dimY=10;
    jugador1=NULL;
    hoyo1=NULL;
    monstruo1=NULL;
    cout<<"Constructor del Juego 1"<<endl;
}
Juego::Juego(int x, int y, Jugador *j, Hoyo *h, Monstruo *m)
{
    dimX=x;
    dimY=y;
    jugador1=j;
    hoyo1=h;
    monstruo1=m;
    cout<<"Constructor del Juego 2"<<endl;
    
}

Jugador* Juego::getJugador()
{
    return jugador1;
}
void Juego::setJugador(Jugador *j)
{
    jugador1=j;
}
Hoyo* Juego::getHoyo()
{
    return hoyo1;
}
void Juego::setHoyo(Hoyo *h)
{
    hoyo1=h;
}
Monstruo* Juego::getMonstruo()
{
    return monstruo1;
}
void Juego::setMonstruo(Monstruo *m)
{
    monstruo1=m;
}

int Juego::getdimX()
{
    return dimX;
}
void Juego::setdimX(int x)
{
    dimX=x;
}

int Juego::getdimY()
{
    return dimY;
}
void Juego::setdimY(int y)
{
    dimY=y;
}
