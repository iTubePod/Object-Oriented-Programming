//
//  Arista.cpp
//  GrafosAput
//
//  Created by LourdesMG on 3/26/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include "Arista.h"

Arista::Arista()
{
    origen = NULL;
    destino = NULL;
    peso = 0;
    estatus = NOVISITADA;
}

Vertice * Arista::getOrigen()
{
    return origen;
}

void Arista::setOrigen(Vertice *o)
{
    origen = o;
}

Vertice * Arista::getDestino()
{
    return destino;
}


void Arista::setDestino(Vertice *d)
{
    destino = d;   
}

int Arista::getPeso()
{
    return peso;
}

void Arista::setPeso(int p){
    peso = p;
}

int Arista::getEstatus()
{
    return estatus;
}

void Arista::setEstatus(int e){
    estatus = e;
}
