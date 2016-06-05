
#include "Libro.h"
#include <iostream>
#include <string>

using namespace std;
Libro::Libro(string a, string t, string e)
{
    autor=a;
    titulo=t;
    editorial=e;
}
string Libro::getAutor()
{
    return autor;
}
void Libro::setAutor(string a)
{
    autor=a;
}

void Libro::imprime()
{
    cout<<"El nombre del autor es: "<<autor<<endl;
    cout<<"El titulo del libro es: "<<titulo<<endl;
    cout<<"La editorial es: "<<editorial<<endl;
}


