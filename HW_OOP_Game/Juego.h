#ifndef GAME
#define GAME

#include <iostream>
#include <string>

#include "enemigo.h"
#include "Monstruo.h"
#include "Jugador.h"
#include "Hoyo.h"

using namespace std;

class Juego{
protected:
    Jugador *jugador1;
    Hoyo *hoyo1;
    Monstruo *monstruo1;
    int dimX;
    int dimY;
public:
    Juego();
    Juego(int x, int y, Jugador *j, Hoyo *h, Monstruo *m);
    
    Jugador* getJugador();
    void setJugador(Jugador *j);
    
    Hoyo* getHoyo();
    void setHoyo(Hoyo *h);
    
    Monstruo* getMonstruo();
    void setMonstruo(Monstruo *m);
    
    int getdimX();
    void setdimX(int x);
    
    int getdimY();
    void setdimY(int y);
};



#endif /* defined(__TareaJuegoPOO__Juego__) */
