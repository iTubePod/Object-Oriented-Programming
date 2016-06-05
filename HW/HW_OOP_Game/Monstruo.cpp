#include "Monstruo.h"


Monstruo::Monstruo()
{
    type='A';
    cout<<"Constructor Monstruo 1"<<endl;
}
Monstruo::Monstruo(int px, int py, char t)
{
    coordX=px;
    coordY=py;
    type=t;
    cout<<"Constructor Monstruo 2"<<endl;
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
        return 10;
    }
    if (type=='B'){
        return 20;
    }
    return 0;
}


