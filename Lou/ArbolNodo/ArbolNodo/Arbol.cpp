//
//  Arbol.cpp
//  ArbolNodo
//
//  Created by LourdesMG on 3/1/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include "Arbol.h"


Arbol::Arbol()
{
    raiz = NULL;   
}

void Arbol::arbolPrueba()
{
    Nodo *a = new Nodo();
    a->setDato("A");
    
    Nodo *b = new Nodo();
    b->setDato("B");
    
    Nodo *c = new Nodo();
    c->setDato("C");
    
    Nodo *d = new Nodo();
    d->setDato("D");
    
    Nodo *e = new Nodo();
    e->setDato("E");
    
    a->setHijoDer(b);
    a->setHijoIzq(c);
    
    c->setHijoDer(d);
    c->setHijoIzq(e);
    
    c->setPadre(a);
    b->setPadre(a);
    e->setPadre(c);
    d->setPadre(c);
    
    raiz = a;
}

void Arbol::postOrden(Nodo *v)
{
    if( v == NULL)
        return;
    
    postOrden(v->getHijoIzq());
    postOrden(v->getHijoDer());
    cout<<v->getDato()<<", ";
    
    
}

void Arbol::preOrden(Nodo *v)
{
    if( v == NULL)
        return;
    
    cout<<v->getDato()<<", ";
    preOrden(v->getHijoIzq());
    preOrden(v->getHijoDer());
}

Nodo * Arbol::getRaiz()
{
    return raiz;
}