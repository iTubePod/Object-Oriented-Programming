//
//  main.c
//  ListaSimple
//
//  Created by LourdesMG on 1/25/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include <stdio.h>
#include "ListaSimple.h"

int main (int argc, const char * argv[])
{

    Nodo *cabeza;
    
    cabeza = creaLista();
    
    cabeza = insertaDato(cabeza, 5);
    cabeza = insertaDato(cabeza, 8);
    
    imprimeLista(cabeza);
    
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}

