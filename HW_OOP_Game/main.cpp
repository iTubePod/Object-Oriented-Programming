#include "Monstruo.h"
#include "Hoyo.h"
#include "Jugador.h"
#include "Juego.h"

int main ()
{
    Monstruo *m;
    m = new Monstruo(2,3,'B');
    cout<<"La Coordenada X del monstruo es: "<<m -> getPosX()<<endl;
    cout<<"La Coordenada Y del monstruo es: "<<m -> getPosY()<<endl;
    cout<<"El tipo de monstruo es: "<<m -> getType()<<endl;
    cout<<"Resta de vida: "<<m -> danio();
    cout<<"____________________________________"<<endl;
    cout<<" "<<endl;

    
    Hoyo *h;
    h = new Hoyo(5,4,20);
    cout<<"La Coordenada X del hoyo es: "<<h -> getPosX()<<endl;
    cout<<"La Coordenada Y del hoyo es: "<<h -> getPosY()<<endl;
    cout<<"El diametro del hoyo es: "<<h -> getDiametro()<<endl;
    cout<<"Resta de vida: "<<h -> danio();
    cout<<"____________________________________"<<endl;
    cout<<" "<<endl;
    
    Jugador *j;
    j = new Jugador(2, 4, 100, "Mauricio");
    cout<<"La Coordenada X del Jugador es: "<<j -> getPosX()<<endl;
    cout<<"La Coordenada Y del Jugador es: "<<j -> getPosY()<<endl;
    cout<<"El nombre del jugador es: "<<j -> getName()<<endl;
    cout<<"Vida restante: "<<j -> getVida()<<endl;
    cout<<"____________________________________"<<endl;
    cout<<" "<<endl;

    Juego *game;
    game = new Juego(10, 10, j, h, m);
    cout<<"Bienvenido al Juego"<<endl;
    cout<<"Las dimensiones del juego son "<<game -> getdimX()<<" por "<<game -> getdimY()<<endl;
}
