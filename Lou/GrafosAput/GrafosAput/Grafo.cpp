//
//  Grafo.cpp
//  GrafosAput
//
//  Created by LourdesMG on 3/26/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include "Grafo.h"


Grafo::Grafo()
{
    
}

void Grafo::creaGrafo()
{
    Vertice *a = new Vertice();
    a->setDato("A");
    
    Vertice *x = new Vertice();
    x->setDato("X");
    
    Vertice *y = new Vertice();
    y->setDato("Y");
    
    Arista *a1 = new Arista();
    a1->setPeso(15);
    a1->setOrigen(a);
    a1->setDestino(y);
    
    Arista *a2 = new Arista();
    a2->setPeso(12);
    a2->setOrigen(a);
    a2->setDestino(x);
    
    Arista *a3 = new Arista();
    a3->setPeso(24);
    a3->setOrigen(y);
    a3->setDestino(x);
    
    lista.push_back(a1);
    lista.push_back(a2);
    lista.push_back(a3);
    
    cout<<"Antes"<<endl;
    vecinos(x);
    cout<<"Despues"<<endl;
    
}

vector<Vertice *> Grafo::vecinos(Vertice *x)
{
    int i=0;
    Arista *a;
    vector<Vertice *> vv;
    
    for(i=0; i< lista.size(); i++)
    {
        a=lista[i];
        if(a->getOrigen()->getDato() == x->getDato())
        {
           vv.push_back(a->getDestino());
            cout<<"Vecino "<< a->getDestino()->getDato()<<endl;
        }
        if(a->getDestino()->getDato() == x->getDato())
        {
            vv.push_back(a->getOrigen());
            cout<<"Vecino "<< a->getOrigen()->getDato()<<endl;
        }
    }

    return vv;
}

vector<Arista *> Grafo::aristas(Vertice *x)
{
    Arista *a;
    vector<Arista *> aa;
    
    for(int i=0; i< lista.size(); i++)
    {
        a=lista[i];
        if(a->getOrigen()->getDato() == x->getDato())
        {
            aa.push_back(a);
            cout<<"Vecino "<< a->getDestino()->getDato()<<endl;
        }
        if(a->getDestino()->getDato() == x->getDato())
        {
            aa.push_back(a);
            cout<<"Vecino "<< a->getOrigen()->getDato()<<endl;
        }
    }
    
    return aa;
}

void Grafo::dfs(Vertice *v)
{
    v->setVisitado(true);
    cout<<v->getDato()<<" visitado"<<endl;
    
    vector<Arista *> e = aristas(v);
    
    for(int i=0; i<e.size(); i++)
    {
       if(e[i]->getEstatus() == NOVISITADA)
       {
           Vertice *w;
           if(
       }
    }
    
}



