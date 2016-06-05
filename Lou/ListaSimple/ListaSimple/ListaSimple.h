//
//  ListaSimple.h
//  ListaSimple
//
//  Created by LourdesMG on 1/25/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Nodo
{
    int dato;
    struct Nodo *sig;
};

typedef struct Nodo Nodo;

Nodo * creaLista();
Nodo * insertaDato(Nodo *cabeza, int d);
void imprimeLista(Nodo *cabeza);
