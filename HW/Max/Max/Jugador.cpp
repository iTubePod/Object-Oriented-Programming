#include <iostream>
#include <string>
#include "Jugador.hpp"

using namespace std;


//Constructores

Jugador::Jugador() {
    
}

Jugador::Jugador(string nombre, int posX, int posY, int vida, int pierna)
{
    this->nombre = nombre;
    this->posX = posX;
    this->posY = posY;
    this->vida = vida;
}


//Metodos get y set

string Jugador::getNombre()
{
    return nombre;
}

void Jugador::setNombre(string nombre)
{
    this->nombre = nombre;
}

int Jugador::getPosx()
{
    return posX;
}

void Jugador::setPosx(int posX)
{
    this->posX = posX;
}

int Jugador::getPosy()
{
    return posY;
}

void Jugador::setPosy(int posY)
{
    this->posY = posY;
}

int Jugador::getVida()
{
    return vida;
}

void Jugador::setVida(int vida)
{
    this->vida = vida;
}

int Jugador::getPierna()
{
    return Pierna;
}

void Jugador::setPierna(int pierna)
{
    Pierna = pierna;
}







