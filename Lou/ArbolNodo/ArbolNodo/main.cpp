//
//  main.cpp
//  ArbolNodo
//
//  Created by LourdesMG on 3/1/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "Arbol.h"

int main (int argc, const char * argv[])
{

    // insert code here...
    
    Arbol *tree = new Arbol();
    
    tree->arbolPrueba();
    
    tree->postOrden(tree->getRaiz());
    
    std::cout << "Hello, World!\n";
    
    tree->preOrden(tree->getRaiz());
    
    int x;
    cin>>x;
    return 0;
}

