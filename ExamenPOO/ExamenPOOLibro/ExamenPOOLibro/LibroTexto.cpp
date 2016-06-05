//
//  LibroTexto.cpp
//  ExamenPOOLibro
//
//  Created by Mauricio G. Coello on 9/17/15.
//  Copyright © 2015 Mauricio G. Coello. All rights reserved.
//
#include "Libro.hpp"
#include "LibroTexto.hpp"

LibroTexto::LibroTexto(string a, string t, string e, string m)
{
    autor=a;
    titulo=t;
    editorial=e;
    materia = m;
    cout<<"Constructor del Libro de Texto"<<endl;
}
void LibroTexto::imprime()
{
    Libro::imprime();
    cout<<"La materia es: "<<materia<<endl;
}

