//
//  Vertice.cpp
//  GrafosAput
//
//  Created by LourdesMG on 3/26/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include "Vertice.h"

Vertice::Vertice()
{
    visitado = false;
}

string Vertice::getDato()
{
    return dato;
}

void Vertice::setDato(string d)
{
    dato = d;
}

bool Vertice::getVisitado()
{
    return  visitado;
}

void Vertice::setVisitado(bool v)
{
    visitado = v;
}