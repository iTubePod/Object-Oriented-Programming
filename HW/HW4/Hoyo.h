#ifndef HOLE
#define HOLE
#include "Enemigo.h"
#include "stdio.h"

class Hoyo : public Enemigo{
    
private:
    int diametro;
    
public:
    Hoyo();
    Hoyo(int px, int py, int d);
    
    int getDiametro();
    void setDiametro(int d);
    
    int danio ();
};
#endif

