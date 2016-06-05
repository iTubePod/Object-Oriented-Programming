#ifndef PLAYER
#define PLAYER

#include <iostream>
#include <string>

using namespace std;

class Jugador {
protected:
    int PosX, PosY, vida;
    string name;
public:
    Jugador();
    Jugador(int pojx, int pojy, int vid, string n);
    
    int getPosX();
    void setPosX(int pojx);
    
    int getPosY();
    void setPosY(int pojy);

    string getName ();
    void setName(string n);

    int getVida();
    void setVida(int vid);
    
};

#endif
