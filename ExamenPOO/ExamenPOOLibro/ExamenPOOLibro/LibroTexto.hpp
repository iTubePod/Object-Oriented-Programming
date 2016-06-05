//
//  LibroTexto.hpp
//  ExamenPOOLibro
//
//  Created by Mauricio G. Coello on 9/17/15.
//  Copyright © 2015 Mauricio G. Coello. All rights reserved.
//

#ifndef LibroTexto_hpp
#define LibroTexto_hpp

#include <iostream>
#include "Libro.hpp"

class LibroTexto: public Libro{
private:
    string materia;
public:
    LibroTexto(string a, string t, string e, string m);
    void imprime();
};


#endif /* LibroTexto_hpp */
