#include "Monstruo.h"
#include "Hoyo.h"
int main ()
{
            Monstruo *m;
            m = new Monstruo(2,3,'B');
            cout<<"La Coordenada X del monstruo es: "<<m -> getPosX()<<endl;
            cout<<"La Coordenada Y del monstruo es: "<<m -> getPosY()<<endl;
            cout<<"El tipo de monstruo es: "<<m -> getType()<<endl;
            cout<<"Resta de vida: "<<m -> danio();
            cout<<"____________________________________"<<endl;
            
            Hoyo *h;
            h = new Hoyo(5,4,20);
            cout<<"La Coordenada X del hoyo es: "<<h -> getPosX()<<endl;
            cout<<"La Coordenada Y del hoyo es: "<<h -> getPosY()<<endl;
            cout<<"El diametro del hoyo es: "<<h -> getDiametro()<<endl;
            cout<<"Resta de vida: "<<h -> danio();
            cout<<"____________________________________"<<endl;
    
}
