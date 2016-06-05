#ifndef MONSTER
#define MONSTER
#include "enemigo.h"

#include <iostream>
#include <string>

class Monstruo: public Enemigo{
private:
    char type;
public:
    Monstruo();
    Monstruo(int px, int py, char t);
    
    void setType(char t);
    char getType();
    
    int danio();

};
#endif
