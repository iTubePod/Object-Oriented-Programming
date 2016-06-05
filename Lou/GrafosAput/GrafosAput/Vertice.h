//
//  Vertice.h
//  GrafosAput
//
//  Created by LourdesMG on 3/26/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#ifndef VERT
#define VERT
#include <iostream>
#include <string>

using namespace std;

class Vertice {
    
private:
    string dato;
    bool visitado;
    
public:
    Vertice();
    string getDato();
    void setDato(string d);
    
    bool getVisitado();
    void setVisitado(bool v);
    
};

#endif