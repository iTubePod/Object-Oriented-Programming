#include "Enemigo.h"

Enemigo::Enemigo()
{
    coordX = 0;
    coordY = 0;

}

Enemigo::Enemigo(int px, int py)
{

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


