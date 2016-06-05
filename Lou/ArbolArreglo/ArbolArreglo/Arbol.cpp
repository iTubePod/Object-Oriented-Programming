//
//  Arbol.cpp
//  ArbolArreglo
//
//  Created by LourdesMG on 3/15/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#include "Arbol.h"

Arbol::Arbol()
{
    for(int i=0; i<TAM; i++)
        arr[i] = "";
}

string Arbol::getRaiz()
{
    return arr[0];
}

void Arbol::creaArbolFijo()
{
    arr[0] = "A";
    arr[1] = "B";
    arr[2] = "C";
    arr[3] = "D";
    arr[4] = "E";
    arr[5] = "F";
    arr[6] = "G";
    arr[11] = "H";
    arr[12] = "I";
    arr[14] = "J";
}

void Arbol::postOrden(int i)
{
    if(i >= TAM || arr[i].compare("") == 0)
        return;
    postOrden(2*i+1);
    postOrden(2*i+2);
    
    cout<< arr[i] << ", ";    
}

void Arbol::buscaPost(int i, string x)
{
    if(i >= TAM || arr[i].compare("") == 0)
        return;
    
    if(arr[i].compare(x) == 0)
    {
        cout<<"Encontrado "<<endl;
        cout<<"La ruta alreves es: "<<endl;
        
        int j=i;
        
        while ( j>0 )
        {
            cout<< arr[j]<< ", ";
            
            j = (int) (j-1) /2;
            
        }
        cout<<arr[j]<<endl;
            
    }
    
    buscaPost(2*i+1, x);
    buscaPost(2*i+2, x);
    

}

void Arbol::preOrden(int i)
{
     
}

void Arbol::inOrden(int i)
{
    
}

