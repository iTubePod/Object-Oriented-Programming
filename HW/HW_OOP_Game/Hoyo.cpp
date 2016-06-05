#include "Hoyo.h"

Hoyo::Hoyo()
{
    diametro=10;
    cout<<"Constructor Hoyo 1"<<endl;
}
Hoyo::Hoyo(int px, int py, int d)
{
    coordX = px;
    coordY = py;
    diametro = d;
    
    cout<<"Constructor Hoyo 2"<<endl;
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
        return 10;
    }
    if (diametro==20){
        return 20;
    }
    return 0;
}

