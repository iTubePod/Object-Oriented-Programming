//
//  Libro.cpp
//  ExamenPOOLibro
//
//  Created by Mauricio G. Coello on 9/17/15.
//  Copyright © 2015 Mauricio G. Coello. All rights reserved.
//
#include <string>
#include "Libro.hpp"
using namespace std;
Libro::Libro(string a, string t, string e)
{
    autor=a;
    titulo=t;
    editorial=e;
}
int Libro::getAutor()
{
    return autor;
}
int Libro::setAutor(string a)
{
    autor=a;
}

void Libro::imprime()
{
    cout<<"El nombre del autor es: "<<autor<<endl;
    cout<<"El titulo del libro es: "<<titulo<<endl;
    cout<<"La editorial es: "<<editorial<<endl;
}


