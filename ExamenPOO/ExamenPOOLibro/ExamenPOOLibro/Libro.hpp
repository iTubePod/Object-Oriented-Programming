//
//  Libro.hpp
//  ExamenPOOLibro
//
//  Created by Mauricio G. Coello on 9/17/15.
//  Copyright © 2015 Mauricio G. Coello. All rights reserved.
//

#ifndef Libro_hpp
#define Libro_hpp

#include <iostream>
#include <string>

using namespace std;
class Libro{
protected:
    string autor;
    string titulo;
    string editorial;
    
public:
    Libro(string a, string t, string e);
    int getAutor();
    int setAutor(string A);
    void imprime();
};

#endif /* Libro_hpp */
