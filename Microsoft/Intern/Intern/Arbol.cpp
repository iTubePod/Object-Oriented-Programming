//
//  Arbol.cpp
//  Intern
//
//  Created by Mauricio G. Coello on 10/22/15.
//  Copyright © 2015 Mauricio G. Coello. All rights reserved.
//

#include "Arbol.hpp"

Arbol::Arbol()
{
    raiz=NULL;
    suma=0;
    size=1;
    
}
void Arbol::inOrden(Nodo *v)
{
    if( v == NULL)
        return;
    
    inOrden(v->getHijoIz());
   // suma=suma+v->getDato();
    cout<<v->getDato()<<endl;
    inOrden(v->getHijoDer());
    //cout<<v->getHijoIz()<<" "<<v->getHijoDer()<<" Suma: "<<suma<<endl;
    
}
Nodo * Arbol::getRaiz()
{
    return raiz;
}
int Arbol::getSuma()
{
    return suma;
}
bool Arbol::isLeave(Nodo * x)
{
    bool leave;
    if (x->getHijoDer()==NULL || x->getHijoIz()==NULL)
        leave=true;
    else
        leave=false;
    return leave;
}
void Arbol::insertDato (int x)
{
    Nodo * temp = new Nodo();
    temp->setDato(x);
    
    if(size==1)
    {
        raiz=temp;
        size++;
        return;
    }
    
    Nodo *aux = raiz;
    while (!isLeave(aux))
    {
        if (x < aux->getDato())
        {
            aux=aux->getHijoIz();
        }
        else
        {
            aux=aux->getHijoDer();
        }
    }
    if (x < aux->getDato())
    {
        aux->setHijoIz(temp);
    }
    else
    {
        aux->setHijoDer(temp);
    }
    temp->setPadre(aux);
    size++;
}
