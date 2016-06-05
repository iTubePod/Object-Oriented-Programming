//
//  Grafo.h
//  GrafosAput
//
//  Created by LourdesMG on 3/26/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#ifndef GRAF
#define GRAF
#include <iostream>
#include <vector>
#include "Vertice.h"
#include "Arista.h"

using namespace std;

class Grafo {
private:
    vector<Arista *> lista;
    
public:
    Grafo();
    void creaGrafo();
    vector<Vertice *> vecinos(Vertice *x);
    vector<Arista *> aristas(Vertice *x);
    void dfs(Vertice *v);
    
};

#endif