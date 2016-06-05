//
//  Nodo.cpp
//  ArbolNodo
//
//  Created by LourdesMG on 3/1/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "Nodo.h"

Nodo::Nodo()
{
p
}

string Nodo::getDato()
{
    return dato;    
}

void Nodo::setDato(string d)
{
    dato = d;
}

Nodo * Nodo::getPadre()
{
    return padre;
}

void Nodo::setPadre(Nodo *p)
{
    padre = p;
}

Nodo * Nodo::getHijoDer()
{
    return hijoDer;    
}

void Nodo::setHijoDer(Nodo *hd)
{
    hijoDer = hd;
}

Nodo * Nodo::getHijoIzq()
{
    return hijoIzq;
}

void Nodo::setHijoIzq(Nodo *hi)
{
    hijoIzq = hi;
}