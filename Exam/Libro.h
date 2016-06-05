#ifndef Libro
#define Libro

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
    string getAutor();
    void setAutor(string A);
    void imprime();
};

#endif /* Libro_hpp */
