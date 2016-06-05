#include "Enemigo.hpp"

Enemigo::Enemigo() {
    coordX = 0;
    coordY = 0;
}

Enemigo::Enemigo(int x, int y) {
    coordX = x;
    coordY = y;
}

int Enemigo::getcoordx()
{
    return coordX;
}

void Enemigo::setcoorx(int x)
{
    coordX = x;
}

int Enemigo::getcoordy()
{
    return coordY;
}

void Enemigo::setcoordy(int y)
{
    coordY = y;
}

int Enemigo::damage()
{
    return 0;
}

