//
//  main.c
//  ListaLigada
//
//  Created by LourdesMG on 1/25/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include "Lista.h"

int main (int argc, const char * argv[])
{
    int in;
    Nodo *lista1 = crearLista();
    scanf("%d", &in);
    while (in>=0) {
        lista1 = insertaDato(lista1,in);
        scanf("%d", &in);
    }
    
    imprimeLista(lista1);
    
    // insert code here...
    //printf("Hello, World!\n");
    return 0;
}

