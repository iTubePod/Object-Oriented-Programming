#ifndef PLYR
#define PLYR

#include <iostream>
#include <string>

using namespace std;

//Atributos
class Jugador
{
    
private:
    string nombre;
    int posX;
    int posY;
    int vida;
    int Pierna;
    
public:
    //Constructores
    
    Jugador();
    
    Jugador(string nombre, int posX, int posY, int vida, int pierna);
    
    //Metodos get y set
    
    string getNombre();
    void setNombre(string nombre);
    
    int getPosx();
    void setPosx(int posX);
    
    int getPosy();
    void setPosy(int posY);
    
    int getVida();
    void setVida(int vida);
    
    int getPierna();
    void setPierna(int pierna);
    
};

#endif


