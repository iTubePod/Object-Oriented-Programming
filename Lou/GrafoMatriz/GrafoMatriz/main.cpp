//
//  main.cpp
//  GrafoMatriz
//
//  Created by LourdesMG on 4/8/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Grafo.h"

int main (int argc, const char * argv[])
{
    Grafo *g = new Grafo();
    
    g->creaGrafo();
    
    int posicion = g->buscaVertice(23);
    
    vector<vertice> des = g->destinos(posicion);
    
    cout<<"Numero de destinos "<<des.size()<<endl;
    
    cout<<"Vertice destino cero "<<des[0].dato<<endl;
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

