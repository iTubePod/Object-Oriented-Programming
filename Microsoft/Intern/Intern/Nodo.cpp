//
//  Nodo.cpp
//  Intern
//
//  Created by Mauricio G. Coello on 10/22/15.
//  Copyright © 2015 Mauricio G. Coello. All rights reserved.
//

#include "Nodo.hpp"

Nodo::Nodo()
{
    dato = 0;
    padre = NULL;
    hijoDer = NULL;
    hijoIzq = NULL;
}

int Nodo::getDato()
{
    return dato;
}

void Nodo::setDato(int x)
{
    dato=x;
}

Nodo * Nodo::getPadre()
{
    return padre;
}
void Nodo::setPadre(Nodo *x)
{
    padre=x;
}

Nodo * Nodo::getHijoDer()
{
    return hijoDer;
}

void Nodo::setHijoDer(Nodo *hd)
{
    hijoDer=hd;
}

Nodo * Nodo::getHijoIz()
{
    return hijoIzq;
}
void Nodo::setHijoIz(Nodo *hi)
{
    hijoIzq=hi;
}