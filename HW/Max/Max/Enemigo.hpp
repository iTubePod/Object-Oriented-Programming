#ifndef ENM
#define ENM

#include <iostream>
using namespace std;

class Enemigo {
protected:
    int coordY;
    int coordX;
public:
    Enemigo();
    Enemigo(int x, int y);
    
    int getcoordx();
    void setcoorx(int x);
    
    int getcoordy();
    void setcoordy(int y);
    
    int damage();
};
#endif