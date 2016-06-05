//
//  Lista.c
//  ListaLigada
//
//  Created by LourdesMG on 1/25/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//


#include "Lista.h"

Nodo * crearLista()
{
    return NULL;
}

Nodo * insertaDato(Nodo *lista, int d)
{
    Nodo *aux;
    aux = malloc(sizeof(Nodo));
  
    aux->dato = d;
    aux->sig = NULL;
    
    if (lista == NULL)
        lista = aux;
    else
    {
        aux->sig = lista;
        lista = aux;
    }
    
    return lista;
  
}

void imprimeLista(Nodo *lista)
{
    Nodo *aux;
    aux = lista;
    printf("__________________\n");
    while (aux != NULL)
    {
        printf("%d\n", aux->dato);
        aux = aux->sig;
    }
}