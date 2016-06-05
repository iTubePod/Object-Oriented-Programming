//
//  ListaSimple.c
//  ListaSimple
//
//  Created by LourdesMG on 1/25/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "ListaSimple.h"


Nodo * creaLista()
{
    return NULL;
}

Nodo * insertaDato(Nodo *cabeza, int d)
{
    Nodo *n;
    n = malloc(sizeof(Nodo));
    
    n->dato = d;
    
    n->sig = cabeza;
    
    cabeza = n;
    
    return cabeza;
}

void imprimeLista(Nodo *cabeza)
{
    Nodo *aux;
    aux = cabeza;
    
    while(aux!=NULL)
    {
        printf("%d\t",aux->dato);
        aux = aux->sig;
    }
}