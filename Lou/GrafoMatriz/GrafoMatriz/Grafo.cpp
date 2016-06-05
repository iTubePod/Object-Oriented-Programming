//
//  Grafo.cpp
//  GrafoMatriz
//
//  Created by LourdesMG on 4/8/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include "Grafo.h"

Grafo::Grafo()
{
    for(int i=0; i<TAM; i++)
        for (int j=0; j<TAM; j++) 
            matriz[i][j] = -1;
        
}

void Grafo::creaGrafo()
{
    vertice a;
    vertice b;
    vertice c;
    
    a.dato = 23;
    a.estatus = NOVISITA;
    
    b.dato = 24;
    b.estatus = NOVISITA;
    
    c.dato = 25;
    c.estatus = NOVISITA;
    
    ver[0] = a;
    ver[1] = b;
    ver[2] = c;
    

    matriz[0][1] = 2;
    matriz[1][2] = 3;
    
    numNodos = 3;
}

int Grafo::buscaVertice(int dato)
{
    for(int i=0; i<numNodos; i++)
    {
        if(ver[i].dato == dato)
            return i;
    }
    
    return -1;
}

vector<vertice> Grafo::destinos(int pos)
{
    vector<vertice> d;
    
    for(int i=0; i<numNodos; i++)
    {
        if( matriz[pos][i] > 0)
            d.push_back(ver[i]);
    }
    
    return d;
}