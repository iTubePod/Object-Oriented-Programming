#ifndef ENEMY
#define ENEMY

#include <iostream>
#include <string>

using namespace std;

class Enemigo {
protected:
    int coordX, coordY;    
public:
    Enemigo();
    Enemigo(int px, int py);
    
    int getPosX();
    void setPosX(int px);
    
    int getPosY();
    void setPosY(int py);

    virtual int danio ();
};

#endif
