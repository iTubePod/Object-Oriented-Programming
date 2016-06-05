//
//  Arbol.h
//  ArbolNodo
//
//  Created by LourdesMG on 3/1/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "Nodo.h"

#include <iostream>
#include <string>

using namespace std;

class Arbol {
    
private:
    Nodo *raiz;
    
public:
    Arbol();
    void arbolPrueba();
    void postOrden(Nodo *v);
    void preOrden(Nodo *v);
    Nodo *getRaiz();
    
};