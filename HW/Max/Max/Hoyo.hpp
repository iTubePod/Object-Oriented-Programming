#ifndef HOYO
#define HOYO

#include "Enemigo.hpp"

class Hoyo : public Enemigo {
private:
    int diametro;
public:
    Hoyo();
    Hoyo(int x, int y, int d);
    
    int getdiametro();
    void setdiametro(int d);
    
    int damage();
};
#endif
