//
//  Arbol.hpp
//  Intern
//
//  Created by Mauricio G. Coello on 10/22/15.
//  Copyright © 2015 Mauricio G. Coello. All rights reserved.
//

#ifndef Arbol_hpp
#define Arbol_hpp

#include "Nodo.hpp"
#include <iostream>
#include <vector>

using namespace std;

class Arbol{
public:
    Nodo *raiz;
    int size;
    int suma;
    Arbol();
    void inOrden(Nodo *v);
    Nodo * getRaiz();
    int getSuma();
    bool isLeave(Nodo * x);
    void insertDato (int x);

};

#endif /* Arbol_hpp */
