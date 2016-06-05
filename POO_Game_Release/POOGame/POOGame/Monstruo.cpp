#include "Monstruo.h"


Monstruo::Monstruo()
{
    type='A';

}
Monstruo::Monstruo(int px, int py, char t)
{
    coordX=px;
    coordY=py;
    type=t;
}
void Monstruo::setType(char t)
{
    type=t;
}
char Monstruo::getType()
{
    return type;
}
int Monstruo::danio()
{
    if (type=='A') {
        return 80;
    }
    if (type=='B'){
        return 60;
    }
    else if (type=='C')
    {
        return 30;
    }
    return 0;
}


