#include "Hoyo.hpp"

Hoyo::Hoyo()
{
    diametro = 0;
}

Hoyo::Hoyo(int x, int y, int d)
{
    coordX = x;
    coordY = y;
    diametro = d;
}

int Hoyo::getdiametro()
{
    return diametro;
}

void Hoyo::setdiametro(int d)
{
    diametro = d;
}

int Hoyo::damage()
{
    if (diametro == 1)
        return 5;
    else
        return -1;
}
