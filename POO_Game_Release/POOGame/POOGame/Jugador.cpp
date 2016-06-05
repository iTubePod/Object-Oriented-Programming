#include "Jugador.h"
Jugador::Jugador()
{
    PosX=10;
    PosY=5;
    vida=100;
    name="Steve";
}
Jugador::Jugador(int pojx, int pojy, int vid, string n)
{
    PosX=pojx;
    PosY=pojy;
    name=n;
    vida=vid;
}
int Jugador::getPosX()
{
    return PosX;
}
void Jugador::setPosX(int pojx)
{
    PosX=pojx;
}
int Jugador::getPosY()
{
    return PosY;
}
void Jugador::setPosY(int pojy)
{
    PosY=pojy;
}
string Jugador::getName()
{
    return name;
}
void Jugador::setName(string n)
{
    name=n;
}

int Jugador::getVida()
{
    return vida;
}
void Jugador::setVida(int vid)
{
    vida=vid;
}

