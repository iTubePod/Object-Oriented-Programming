#include "Monstruo.hpp"

Monstruo::Monstruo()
{
    string tipo;
}

Monstruo::Monstruo(int x, int y, int t)
{
    coordY = y;
    coordX = x;
    tipo = t;
}

int Monstruo::gettipo()
{
    return tipo;
}

void Monstruo::settipo(int t)
{
    tipo = t;
}

int Monstruo::damage()
{
    if (tipo == 1)
    {
        return 80;
    }
    else if (tipo == 2)
    {
        return 60;
    }
    else
    {
        return 30;
    }
}