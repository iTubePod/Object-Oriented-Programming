//
//  main.cpp
//  Intern
//
//  Created by Mauricio G. Coello on 10/22/15.
//  Copyright © 2015 Mauricio G. Coello. All rights reserved.
//


#include <iostream>
#include "Arbol.hpp"

int main(int argc, const char * argv[]) {
    Arbol *tree = new Arbol();
    Nodo *papa= new Nodo();
    
    tree->insertDato(6);
    tree->insertDato(10);
    tree->insertDato(4);
    
    
    tree->inOrden(papa);


    
    /*
    if (a->getDato()>tree->raiz->getDato())
        tree->raiz->setHijoDer(a);
    else if(a->getDato()<tree->raiz->getDato())
        tree->raiz->setHijoIz(a);
    else if (b->getDato()>tree->raiz->getDato())
        tree->raiz->setHijoDer(b);
    else if (b->getDato()<tree->raiz->getDato())
        tree->raiz->setHijoIz(b);
    else if (c->getDato()>tree->raiz->getDato())
        tree->raiz->setHijoDer(c);
    else if (c->getDato()<tree->raiz->getDato())
        tree->raiz->setHijoIz(c);
    else if (e->getDato()>tree->raiz->getDato())
        tree->raiz->setHijoDer(e);
    else if (e->getDato()<tree->raiz->getDato())
        tree->raiz->setHijoIz(e);
    else if (f->getDato()>tree->raiz->getDato())
        tree->raiz->setHijoDer(f);
    else if (f->getDato()<tree->raiz->getDato())
        tree->raiz->setHijoIz(f);
    else if (g->getDato()>tree->raiz->getDato())
        tree->raiz->setHijoDer(g);
    else if (g->getDato()<tree->raiz->getDato())
        tree->raiz->setHijoIz(g);
     */
    


    
    
    cout<<"El trayecto con mayor divrsion es: "<<tree->getSuma()<<endl;

    
    



    
    
    return 0;
}
