//
//  main.cpp
//  ArbolArreglo
//
//  Created by LourdesMG on 3/15/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Arbol.h"

int main (int argc, const char * argv[])
{

    Arbol *a = new Arbol();
    
    a->creaArbolFijo();
    a->postOrden(0);
    a->buscaPost(0, "H");

    
    // insert code here...
    std::cout << " Hello, World!\n";
    return 0;
}

