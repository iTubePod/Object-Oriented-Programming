//
//  Arista.h
//  GrafosAput
//
//  Created by LourdesMG on 3/26/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef ARI
#define ARI
#include <iostream>
#include "Vertice.h"

#define NOVISITADA 0
#define DESCUBRE 1
#define RETROCESO 2

using namespace std;

class Arista {
    
private:
    Vertice *origen;
    Vertice *destino;
    int peso;
    int estatus; //0-NO visitada, 1-Descubrimiento, 2-Retroceso
    
public:
    Arista();
    Vertice * getOrigen();
    void setOrigen(Vertice *o);
    Vertice * getDestino();
    void setDestino(Vertice *d);
    
    int getPeso();
    void setPeso(int p);
    
    int getEstatus();
    void setEstatus(int e);
    
    
};

#endif