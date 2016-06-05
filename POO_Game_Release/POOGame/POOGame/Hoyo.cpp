#include "Hoyo.h"

Hoyo::Hoyo()
{
    diametro=10;
}
Hoyo::Hoyo(int px, int py, int d)
{
    coordX = px;
    coordY = py;
    diametro = d;
}

int Hoyo::getDiametro()
{
    return diametro;
}
void Hoyo::setDiametro(int d)
{
    diametro=d;
}

int Hoyo::danio ()
{
    if (diametro==10) {
        return -1;
    }
    else
    {
        return 5;
    }
    return 0;
}

