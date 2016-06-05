//
//  Grafo.h
//  GrafoMatriz
//
//  Created by LourdesMG on 4/8/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#ifndef GRAF
#define GRAF

#define TAM 20
#define VISITADO 0
#define NOVISITA 1

#include <iostream>
#include <vector>

using namespace std;

struct vertice {
    int dato;
    int estatus;
};

typedef struct vertice vertice;


class Grafo {
private:
    int matriz[TAM][TAM];
    vertice ver[TAM];
    int numNodos;
    
public: 
    
    Grafo();
    void creaGrafo();
    int buscaVertice(int dato);
    vector<vertice> destinos(int pos);
    
};

#endif