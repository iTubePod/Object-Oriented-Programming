#include "Enemigo.h"

Enemigo::Enemigo()
{
    coordX = 0;
    coordY = 0;
    cout<<"Constructor Enemigo 1"<<endl;
}

Enemigo::Enemigo(int px, int py)
{
    cout<<"Constructor Enemigo 2"<<endl;
}

int Enemigo::getPosX()
{
    return coordX;
}

void Enemigo::setPosX(int px)
{
    coordX = px;
}

int Enemigo::getPosY()
{
    return coordY;
}

void Enemigo::setPosY(int py)
{
    coordY = py;
    
}
int Enemigo::danio ()
{
    return 0;
}


