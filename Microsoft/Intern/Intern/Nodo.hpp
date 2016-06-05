//
//  Nodo.hpp
//  Intern
//
//  Created by Mauricio G. Coello on 10/22/15.
//  Copyright © 2015 Mauricio G. Coello. All rights reserved.
//

#ifndef Nodo_hpp
#define Nodo_hpp

#include <iostream>

#endif /* Nodo_hpp */
class Nodo{
public:
    int dato;
    Nodo *hijoDer;
    Nodo *hijoIzq;
    Nodo *padre;
    Nodo();
    
    int getDato();
    void setDato(int x);
    
    Nodo * getPadre();
    void setPadre(Nodo *x);
    
    Nodo * getHijoDer();
    void setHijoDer(Nodo *hd);
    
    Nodo * getHijoIz();
    void setHijoIz(Nodo *hi);
};
