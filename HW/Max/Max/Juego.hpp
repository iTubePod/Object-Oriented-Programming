#ifndef PLAY
#define PLAY
#include <iostream>
#include "Jugador.hpp"
#include "Hoyo.hpp"
#include "Monstruo.hpp"
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#define DIMX 9
#define DIMY 9
#define monstruos 6
#define hoyos 5
#define monedas 2

using namespace std;

class Juego {
    
    //Atributos
    
protected:
    Jugador Player;
    Hoyo hoyo;
    Monstruo monstruo;
    
public:
    
    int celda[10][10] = { NULL };
    
    //Costructores
    Juego();
    
    Juego(Jugador p, Hoyo c, Monstruo a, int celda[10][10]);
    
    Jugador getJugador();
    void setJugador(Jugador p);
    
    Monstruo getMonstruo();
    void setMonstruo(Monstruo a);
    
    Hoyo getHoyo();
    void setHoyo(Hoyo c);
    
    int inicializar();
    int jugar(Jugador *p, vector <Hoyo *> hoyo, vector <Monstruo*> monstruo);
    
};
#endif
