#include "juego.h"
#include "Jugador.h"
#include "Hoyo.h"

Juego::Juego()
{
    //Inicializar();
    //Jugar();
}

void Juego::Inicializar()
{
//Llena celda de ceros;
    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            celda[i][j]=0;
        }
    }
//Vector Hoyo
    Hoyo *h1, *h2, *h3, *h4, *h5;
    h1= new Hoyo(1,4,5);
    H.push_back(h1);
    h2 = new Hoyo(6,4,10);
    H.push_back(h2);
    h3 = new Hoyo(8,6,10);
    H.push_back(h3);
    h4 = new Hoyo(6,7,5);
    H.push_back(h4);
    h5 = new Hoyo(4,8,5);
    H.push_back(h5);

    //LLENA DE HOYOS
    celda[1][4]=3;
    celda[6][4]=3;
    celda[8][6]=3;
    celda[6][7]=3;
    celda[4][8]=3;
    
//Vector monstruo
    
    Monstruo *m1, *m2, *m3, *m4, *m5, *m6;
    m1 = new Monstruo(1,1,'A');
    M.push_back(m1);
    m2 = new Monstruo(4,1,'C');
    M.push_back(m2);
    m3 = new Monstruo(3,3, 'A');
    M.push_back(m3);
    m4 = new Monstruo(4,5,'B');
    M.push_back(m4);
    m5 = new Monstruo(2,6,'A');
    M.push_back(m5);
    m6 = new Monstruo(1,8,'C');
    M.push_back(m6);
    
    //LLENA DE MONSTRUOS
    celda[1][1]=6;
    celda[4][1]=6;
    celda[3][3]=6;
    celda[4][5]=6;
    celda[2][6]=6;
    celda[1][8]=6;
    

    
    //LLENA DE MONEDAS
    celda[6][2]=10;
    celda[7][8]=10;

    for (int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            if(celda[i][j]==6)
            {
                celda[i+1][j]=5;
                celda[i-1][j]=5;
                celda[i][j+1]=5;
                celda[i][j-1]=5;
            }
            else if(celda[i][j]==3)
            {
                celda[i+1][j]=2;
                celda[i-1][j]=2;
                celda[i][j+1]=2;
                celda[i][j-1]=2;
            }
        }
    }
}
void Juego::Jugar()
{
    while (loop==0)
    {
        cout<<"Como te llamas?"<<endl;
        cout<<">";
        cin>>name;
        P1 = new Jugador(0, 9, 400, name);
        cout<<"_____________________________________________________"<<endl;
        cout<<"¡Suerte "<<name<<"!"<<endl;
        cout<<"_____________________________________________________"<<endl;
        cout<<"Te encuentras en la esquina inferior derecha del mapa"<<endl;
        cout<<"_____________________________________________________"<<endl;
        cout<<"Para ir a la izquierda [A]"<<endl;
        cout<<"Para ir a la derecha   [D]"<<endl;
        cout<<"Para ir hacia arriba   [W]"<<endl;
        cout<<"Para ir hacia abajo    [S]"<<endl;
        cout<<"_____________________________________________________"<<endl;
        cout<<"Si hay olor, un monstruo esta cerca y te podra atacar, ¡CUIDADO!"<<endl;
        cout<<"Si hay viento, ¡CUIDADO!, hay un hoyo cerca y si es lo suficientemente grande te rompera la pierna"<<endl;
        cout<<"_____________________________________________________"<<endl;
        
        while((P1-> getVida())>0 && P1->getVida()<=400)
        {
            cout<<"Que quieres hacer ahora?"<<endl;
            cout<<">";
            cin>>move;
            if (move=='a')
            {
                x=P1 -> getPosX();
                y=P1 -> getPosY();
                x=x-1;
                P1 -> setPosX(x);
                if (x<0 || x>9 ||y<0||y>9)
                {
                    cout<<"No puedes ir ahi"<<endl;
                    x=x+1;
                    P1 -> setPosX(x);
                }
                cout<<"Posicion acual, X: "<<x<<", Y: "<<y<<endl;
                //cout<<"CELL_VALUE: "<<celda[x][y]<<endl;
                if (celda[x][y]==0) {
                    cout<<"Se siente solo aqui"<<endl;
                }
                else if (celda[x][y]==2)
                    cout<<"Por aqui hay viento"<<endl;
                else if (celda[x][y]==3)
                {
                    for (int i=0; i<H.size(); i++)
                    {
                        if (H[i]->getPosX()==x && H[i]->getPosY()==y)
                        {
                            if(H[i]->danio()==-1)
                            {
                                up=1;
                                cout<<"Vaya hoyo, te has roto una pierna, ahora no podras subir"<<endl;
                                cout<<"Vida restante: "<<P1->getVida()<<endl;
                            }
                            else
                            {
                                P1->setVida(P1->getVida()-(H[i]->danio()));
                                cout<<"Has caido en un hoyo de "<<H[i]->getDiametro()<<" de diametro"<<endl;
                                cout<<"Vida restante: "<<P1->getVida()<<endl;
                            }
                        }
                    }
                }
                
                else if (celda[x][y]==5)
                    cout<<"Aqui huele mal"<<endl;
                else if (celda[x][y]==6)
                {
                    for (int i=0; i<M.size(); i++)
                    {
                        if (M[i]->getPosX()==x && M[i]->getPosY()==y)
                        {
                            P1->setVida((P1->getVida()-M[i]->danio()));
                            cout<<"Has sido atacado por un monstruo tipo "<<M[i]->getType()<<endl;
                            cout<<"Vida restante: "<<P1->getVida()<<endl;
                        }
                    }
                }
                else if (celda[x][y]==10)
                {
                    cout<<"Has encontrado el tesoro!"<<endl;
                    P1->setVida(410);
                }
            }
            else if (move=='d')
            {
                x=P1 -> getPosX();
                y=P1 -> getPosY();
                x=x+1;
                P1 -> setPosX(x);
                if (x<0 || x>9 ||y<0||y>9)
                {
                    cout<<"No puedes ir ahi"<<endl;
                    x=x-1;
                    P1 -> setPosX(x);
                }
                cout<<"Posicion acual, X: "<<x<<", Y: "<<y<<endl;
                if (celda[x][y]==0) {
                    cout<<"Se siente solo aqui"<<endl;
                }
                else if (celda[x][y]==2)
                    cout<<"Por aqui hay viento"<<endl;
                else if (celda[x][y]==3)
                {
                    for (int i=0; i<H.size(); i++)
                    {
                        if (H[i]->getPosX()==x && H[i]->getPosY()==y)
                        {
                            if(H[i]->danio()==-1)
                            {
                                up=1;
                                cout<<"Vaya hoyo, te has roto una pierna, ahora no podras subir"<<endl;
                                cout<<"Vida restante: "<<P1->getVida()<<endl;
                            }
                            else
                            {
                                P1->setVida(P1->getVida()-(H[i]->danio()));
                                cout<<"Has caido en un hoyo de "<<H[i]->getDiametro()<<" de diametro"<<endl;
                                cout<<"Vida restante: "<<P1->getVida()<<endl;
                            }
                        }
                    }
                }
                
                else if (celda[x][y]==5)
                    cout<<"Aqui huele mal"<<endl;
                else if (celda[x][y]==6)
                {
                    for (int i=0; i<M.size(); i++)
                    {
                        if (M[i]->getPosX()==x && M[i]->getPosY()==y)
                        {
                            P1->setVida((P1->getVida()-M[i]->danio()));
                            cout<<"Has sido atacado por un monstruo tipo "<<M[i]->getType()<<endl;
                            cout<<"Vida restante: "<<P1->getVida()<<endl;
                        }
                    }
                }
                else if (celda[x][y]==10)
                {
                    cout<<"Has encontrado el tesoro!"<<endl;
                    P1->setVida(410);
                }
            }
            else if (move=='w')
            {
                if(up==0)
                {
                    x=P1 -> getPosX();
                    y=P1 -> getPosY();
                    y=y+1;
                    P1 -> setPosY(y);
                    if (x<0 || x>9 ||y<0||y>9)
                    {
                        cout<<"No puedes ir ahi"<<endl;
                        y=y-1;
                        P1 -> setPosY(y);
                    }
                    cout<<"Posicion acual, X: "<<x<<", Y: "<<y<<endl;
                    if (celda[x][y]==0) {
                        cout<<"Se siente solo aqui"<<endl;
                    }
                    else if (celda[x][y]==2)
                        cout<<"Por aqui hay viento"<<endl;
                    else if (celda[x][y]==3)
                    {
                        for (int i=0; i<H.size(); i++)
                        {
                            if (H[i]->getPosX()==x && H[i]->getPosY()==y)
                            {
                                if(H[i]->danio()==-1)
                                {
                                    up=1;
                                    cout<<"Vaya hoyo, te has roto una pierna, ahora no podras subir"<<endl;
                                    cout<<"Vida restante: "<<P1->getVida()<<endl;
                                }
                                else
                                {
                                    P1->setVida(P1->getVida()-(H[i]->danio()));
                                    cout<<"Has caido en un hoyo de "<<H[i]->getDiametro()<<" de diametro"<<endl;
                                    cout<<"Vida restante: "<<P1->getVida()<<endl;
                                }
                            }
                        }
                    }
                    
                    else if (celda[x][y]==5)
                        cout<<"Aqui huele mal"<<endl;
                    else if (celda[x][y]==6)
                    {
                        for (int i=0; i<M.size(); i++)
                        {
                            if (M[i]->getPosX()==x && M[i]->getPosY()==y)
                            {
                                P1->setVida((P1->getVida()-M[i]->danio()));
                                cout<<"Has sido atacado por un monstruo tipo "<<M[i]->getType()<<endl;
                                cout<<"Vida restante: "<<P1->getVida()<<endl;
                            }
                        }
                    }
                    else if (celda[x][y]==10)
                    {
                        cout<<"Has encontrado el tesoro!"<<endl;
                        P1->setVida(410);
                    }
                }
                else
                {
                    cout<<"Tienes la pierna rota, no puedes subir"<<endl;
                    cout<<"Posicion acual, X: "<<x<<", Y: "<<y<<endl;
                }
            }
                else if (move=='s')
                {
                    x=P1 -> getPosX();
                    y=P1 -> getPosY();
                    y=y-1;
                    P1 -> setPosY(y);
                    if (x<0 || x>9 ||y<0||y>9)
                    {
                        cout<<"No puedes ir ahi"<<endl;
                        y=y+1;
                        P1 -> setPosY(y);
                    }
                    cout<<"Posicion acual, X: "<<x<<", Y: "<<y<<endl;
                    if (celda[x][y]==0) {
                        cout<<"Se siente solo aqui"<<endl;
                    }
                    else if (celda[x][y]==2)
                        cout<<"Por aqui hay viento"<<endl;
                    else if (celda[x][y]==3)
                    {
                        for (int i=0; i<H.size(); i++)
                        {
                            if (H[i]->getPosX()==x && H[i]->getPosY()==y)
                            {
                                if(H[i]->danio()==-1)
                                {
                                    up=1;
                                    cout<<"Vaya hoyo, te has roto una pierna, ahora no podras subir"<<endl;
                                    cout<<"Vida restante: "<<P1->getVida()<<endl;
                                }
                                else
                                {
                                    P1->setVida(P1->getVida()-(H[i]->danio()));
                                    cout<<"Has caido en un hoyo de "<<H[i]->getDiametro()<<" de diametro"<<endl;
                                    cout<<"Vida restante: "<<P1->getVida()<<endl;
                                }
                            }
                        }
                    }
        
                    else if (celda[x][y]==5)
                        cout<<"Aqui huele mal"<<endl;
                    else if (celda[x][y]==6)
                    {
                        for (int i=0; i<M.size(); i++)
                        {
                            if (M[i]->getPosX()==x && M[i]->getPosY()==y)
                            {
                                P1->setVida((P1->getVida()-M[i]->danio()));
                                cout<<"Has sido atacado por un monstruo tipo "<<M[i]->getType()<<endl;
                                cout<<"Vida restante: "<<P1->getVida()<<endl;
                            }
                        }
                    }
                    else if (celda[x][y]==10)
                    {
                        cout<<"Has encontrado el tesoro!"<<endl;
                        P1->setVida(410);
                    }
                }
                    cout<<"_____________________________________________________"<<endl;
            }
                if(P1->getVida()<=0)
                {
                    cout<<"Perdiste!"<<endl;
                    loop=1;
                }
                else if (P1->getVida()>400)
                {
                    cout<<"Ganaste!"<<endl;
                    loop=1;
                }
            }
}
/*
Jugador* Juego::getJugador()
{
    return jugador1;
}
void Juego::setJugador(Jugador *j)
{
    jugador1=j;
}
Hoyo* Juego::getHoyo()
{
    return h;
}
Monstruo* Juego::getMonstruo()
{
    return m;
}

int Juego::getdimX()
{
    return dimX;
}
void Juego::setdimX(int x)
{
    dimX=x;
}
int Juego::getdimY()
{
    return dimY;
}
void Juego::setdimY(int y)
{
    dimY=y;
}
*/