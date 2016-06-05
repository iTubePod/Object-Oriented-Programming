//
//  Nodo.h
//  ArbolNodo
//
//  Created by LourdesMG on 3/1/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class Nodo {
    
private:
    string dato;
    Nodo *hijoDer;
    Nodo *hijoIzq;
    Nodo *padre;
    
public:
    Nodo();
    string getDato();
    void setDato(string d);
    
    Nodo * getPadre();
    void setPadre(Nodo *p);
    
    Nodo * getHijoDer();
    void setHijoDer(Nodo *hd);
    
    Nodo * getHijoIzq();
    void setHijoIzq(Nodo *hi);
    
};