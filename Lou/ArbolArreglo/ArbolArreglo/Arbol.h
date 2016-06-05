//
//  Arbol.h
//  ArbolArreglo
//
//  Created by LourdesMG on 3/15/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#include <iostream>
#define TAM 20

using namespace std;

class Arbol {
    
private:
    string arr[TAM];
    
public:
    Arbol();
    string getRaiz();
    void creaArbolFijo();
    void postOrden(int i);
    void buscaPost(int i, string x);
    void preOrden(int i);
    void inOrden(int i);    
};