#ifndef GAME
#define GAME
#define ARRAY_SIZE_X 10
#define ARRAY_SIZE_Y 10

#include <iostream>
#include <string>
#include <vector>

#include "enemigo.h"
#include "Monstruo.h"
#include "Jugador.h"
#include "Hoyo.h"

using namespace std;

class Juego{
protected:
    Jugador *jugador1;
    Hoyo *h;
    Monstruo *m;
    int dimX;
    int dimY;
    int celda [ARRAY_SIZE_X][ARRAY_SIZE_Y];
    vector<Monstruo *>M;
    vector<Hoyo *>H;
    int x, y;
    int loop=0;
    int up=0;
    char move;
    string name;
    Jugador *P1;
public:
    Juego();
    Juego(int x, int y, Jugador *j, Hoyo *h, Monstruo *m);
    
    void Inicializar();
    void Jugar();
    /*
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
    */
};



#endif /* defined(__TareaJuegoPOO__Juego__) */
