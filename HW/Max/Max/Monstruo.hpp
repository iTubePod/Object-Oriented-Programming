#ifndef MONS
#define MONS

#include "Enemigo.hpp"
//Creacion de Clase
class Monstruo: public Enemigo {
public:
    int tipo;
public:
    Monstruo();
    Monstruo(int x, int y, int t);
    
    int gettipo();
    void settipo(int t);
    
    int damage();
};
#endif