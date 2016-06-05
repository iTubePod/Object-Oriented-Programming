//
//  main.cpp
//  Vectores
//
//  Created by LourdesMG on 2/12/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> duplica_vector(vector<int> entrada)
{
    vector<int> resultado;
    
    for(int i=0; i<entrada.size(); i++)
    {
        resultado.push_back(entrada[i]);
        resultado.push_back(entrada[i]);
    }
    
    return resultado;
}


int main (int argc, const char * argv[])
{
    vector<int> x;
    
    x.push_back(25);
    x.push_back(12);
    x.push_back(33);
    
    for(int i=0; i<x.size(); i++)
        cout<<"Contenido del vector en "<<i<<" es "<<x[i]<<endl;
    
    vector<int> salida = duplica_vector(x);
    
    for(int i=0; i<salida.size(); i++)
        cout<<"Contenido de salida en "<<i<<" es "<<salida[i]<<endl;
    
    cout << "Hello, World!\n";
    return 0;
}

