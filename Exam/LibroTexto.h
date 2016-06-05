#ifndef LibroTexto_hpp
#define LibroTexto_hpp

#include <iostream>
#include "Libro.h"

class LibroTexto: public Libro{
private:
    string materia;
public:
	LibroTexto();
    LibroTexto(string a, string t, string e, string m);
    void imprime();
};


#endif /* LibroTexto_hpp */
