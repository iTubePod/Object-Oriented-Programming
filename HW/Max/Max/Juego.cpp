#include <iostream>
#include "Juego.hpp"
#include "Hoyo.hpp"
#include "Monstruo.hpp"

//Costructores

Juego::Juego() {
}

Juego::Juego(Jugador p, Hoyo c, Monstruo a, int celda[10][10])
{
    
}

Jugador Juego::getJugador()
{
    return Player;
}

void Juego::setJugador(Jugador p)
{
    Player = p;
}

Hoyo Juego::getHoyo()
{
    return hoyo;
}

void Juego::setHoyo(Hoyo c)
{
    hoyo = c;
}

Monstruo Juego::getMonstruo()
{
    return monstruo;
}

void Juego::setMonstruo(Monstruo a)
{
    monstruo = a;
}

int Juego::inicializar() {
    
    srand(time(NULL));
    //Jugador
    Jugador *p;
    p = new Jugador("Max", 0, 9, 100, 0);
    setJugador(*p);
    for (int i = 0; i <= DIMX;i++) {
        for (int k = 0; k <= DIMY;k++) {
            if ((i == p->getPosx()) && (k == p->getPosy())) {
                celda[i][k] = 1;
            }
        }
    }
    //Monstruo
    vector <Monstruo *> monstruo;
    for (int i = 0; i <= monstruos;i++) {
        monstruo.push_back(new Monstruo(rand() % 8 + 1, rand() % 8 + 1, rand() % 3 + 1));
        setMonstruo(*monstruo[i]);
        if (((celda[monstruo[i]->getcoordx()][monstruo[i]->getcoordy()] != 0) && (celda[(monstruo[i]->getcoordx())-1][monstruo[i]->getcoordy()] != 0) && (celda[monstruo[i]->getcoordx()][(monstruo[i]->getcoordy())-1] != 0) && (celda[(monstruo[i]->getcoordx()) + 1][monstruo[i]->getcoordy()] != 0)&& (celda[monstruo[i]->getcoordx()][(monstruo[i]->getcoordy()) + 1] != 0))){
            monstruo.pop_back();
            i--;
        }
        else {
            celda[monstruo[i]->getcoordx()][monstruo[i]->getcoordy()] = 6;
            celda[monstruo[i]->getcoordx() - 1][monstruo[i]->getcoordy()] = 5;
            celda[monstruo[i]->getcoordx()][monstruo[i]->getcoordy() - 1] = 5;
            celda[monstruo[i]->getcoordx()][monstruo[i]->getcoordy() + 1] = 5;
            celda[monstruo[i]->getcoordx() + 1][monstruo[i]->getcoordy()] = 5;
        }
    }
    //Hoyo
    vector <Hoyo *> hoyo;
    for (int i = 0; i <= hoyos;i++) {
        hoyo.push_back(new Hoyo(rand() % 8 + 1, rand() % 8 + 1, rand() % 2 + 1));
        setHoyo(*hoyo[i]);
        if (((celda[hoyo[i]->getcoordx()][hoyo[i]->getcoordy()] != 0) && (celda[(hoyo[i]->getcoordx()) - 1][hoyo[i]->getcoordy()] != 0) && (celda[hoyo[i]->getcoordx()][(hoyo[i]->getcoordy()) - 1] != 0) && (celda[(hoyo[i]->getcoordx()) + 1][hoyo[i]->getcoordy()] != 0) && (celda[hoyo[i]->getcoordx()][(hoyo[i]->getcoordy()) + 1] != 0))) {
            hoyo.pop_back();
            i--;
        }
        else {
            celda[hoyo[i]->getcoordx()][hoyo[i]->getcoordy()] = 3;
            celda[hoyo[i]->getcoordx() - 1][hoyo[i]->getcoordy()] = 2;
            celda[hoyo[i]->getcoordx()][hoyo[i]->getcoordy() - 1] = 2;
            celda[hoyo[i]->getcoordx()][hoyo[i]->getcoordy() + 1] = 2;
            celda[hoyo[i]->getcoordx() + 1][hoyo[i]->getcoordy()] = 2;
        }
    }
    celda[10][10] = 10;
    celda[0][10] = 10;
    jugar(p, hoyo, monstruo);
    return 0;
}

int Juego::jugar(Jugador *p,vector <Hoyo *> hoyo, vector <Monstruo *> monstruo){
    int ans = 1;
    while (ans != 0) {
        cout << "Bienvenido a Hyrule" << endl << "1.	Jugar" << endl << "2.	Instrucciones" << endl<< "0.	Salir " <<endl;
        cin >> ans;
        if (ans == 1) {
            while (p->getVida() >= 0) {
                cout << "-------------------------------------------------------------------------------------------" << endl;
                int choice = 0;
                //Si tienes la pierna rota, ahora solo podras moverte hacia la izquierda o derecha.
                if (p->getPierna() == 1) {
                    cout << "Hacia donde te quieres mover" << endl << "1. Izquierda" << endl << "2. Derecha" << endl;
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            p->setPosx(p->getPosx() + 1);
                            break;
                        case 2:
                            p->setPosx(p->getPosx() - 1);
                            break;
                        default:
                            cout << "No existe esa opcion!" << endl;
                            break;
                    }
                }
                else {
                    cout << "Hacia donde te quieres mover" << endl << "1. Arriba" << endl << "2. Izquierda" << endl << "3. Derecha" << endl << "4. Abajo" << endl;
                    cin >> choice;
                    switch (choice) {
                        case 1:
                            p->setPosy(p->getPosy() + 1);
                            if ((p->getPosy() + 1) > 9) {
                                p->setPosy(p->getPosy() - 1);
                                cout << "No puedes ir ahi, estas fuera de los limites!" << endl;
                            }
                            break;
                        case 2:
                            p->setPosx(p->getPosx() + 1);
                            if ((p->getPosx() + 1) > 9) {
                                p->setPosx(p->getPosx() - 1);
                                cout << "No puedes ir ahi, estas fuera de los limites!" << endl;
                            }
                            break;
                        case 3:
                            p->setPosx(p->getPosx() - 1);
                            if ((p->getPosx() - 1) < 0) {
                                p->setPosx(p->getPosx() + 1);
                                cout << "No puedes ir ahi, estas fuera de los limites!" << endl;
                            }
                            break;
                        case 4:
                            p->setPosy(p->getPosy() - 1);
                            if ((p->getPosy() - 1) < 0) {
                                p->setPosy(p->getPosy() + 1);
                                cout << "No puedes ir ahi, estas fuera de los limites!" << endl;
                            }
                            break;
                        default:
                            cout << "No existe esa opcion!" << endl;
                            break;
                    }
                    //Si encuentras la celda con valor 10, significa que has encontrado el tesoro. Por lo tanto, has ganado el juego!
                    if (celda[p->getPosx()][p->getPosy()] == 10) {
                        cout << "Has encontrado el tesoro!." << endl;
                        cout << "GANASTE!!" << endl;
                        ans = 0;
                    }
                    //Si existe la celda con valor 2, hara mucho viento. Y debes de tomar cuenta que esta cerca un hoyo.
                    if (celda[p->getPosx()][p->getPosy()] == 2) {
                        cout << "Hay mucho viento por aqui." << endl;
                    }
                    //Si existe la celda con valor 5, olera feo. Y debes de tomar en cuenta que esta cerca un monstruo.
                    if (celda[p->getPosx()][p->getPosy()] == 5) {
                        cout << "Huele muy feo por aqui" << endl;
                    }
                    //Un monstruo de cualquier tipo te ataca, y te resta vida.
                    if (celda[p->getPosx()][p->getPosy()] == 6) {
                        for (int i = 0; i <= monstruos;i++) {
                            if (celda[monstruo[i]->getcoordx()][monstruo[i]->getcoordy()] == celda[p->getPosx()][p->getPosy()]) {
                                p->setVida(p->getVida() - monstruo[i]->damage());
                                cout << "Un monstruo tipo " << monstruo[i]->gettipo() << " te ha atacado!!" << endl;
                            }
                        }
                        cout << "Ahora tienes " << p->getVida() << " de vida" << endl;
                        if (p->getVida() <= 0) {
                            ans = 0;
                        }
                    }
                    //Un hoyo hace que se rompa la pierna, y le resta vida.
                    if (celda[p->getPosx()][p->getPosy()] == 3) {
                        for (int i = 0; i <= hoyos;i++) {
                            if (celda[hoyo[i]->getcoordx()][hoyo[i]->getcoordy()] == celda[p->getPosx()][p->getPosy()]) {
                                p->setVida(p->getVida() - hoyo[i]->damage());
                                p->setPierna(1);
                                cout << "Has caido en un hoyo de  " << hoyo[i]->getdiametro() << "m de diametro, ahora ya no puedes subir ni bajar!!!" << endl;
                            }
                        }
                        cout << "Ahora tienes " << p->getVida() << " de vida" << endl;
                        if (p->getVida() <= 0) {
                            ans = 0;
                        }
                    }
                }
            }
            cout << "PERDISTE" << endl;
        }
        if (ans == 2) {
            cout << "-------------------------------------------------------------------------------------------" << endl;
            cout << "Estas en un bosque donde se encuentran algunos pozos, y monstruos que te pueden atacar. " << endl << "Te puedes mover hacia arriba, abajo, izquierda o derecha, si te sales de los limites, el programa te lo dira." << endl << "Si encuentras que en una celda existe mucho viento, es porque cerca de ahi hay un pozo. Ten cuidado!" << endl << "Si encuentras que en una celda huele feo, es porque cerca hay un monstruo, piensa bien hacia donde te moveras. " << endl << "Si enceuntras que en una celda hay un monstruo, el monstruo te atacara y te restara vida." << endl << "Si encuentras que en una celda existe un pozo, se te rompera la pierna y no podras subir, ni bajar." << endl<<"Suerte!"<<endl;
            cout << "-------------------------------------------------------------------------------------------" << endl;
        }
        if ((ans != 1) && (ans != 2) && (ans!=0)) {
            cout << "No existe esa opcion!" << endl;
        }
        
    }
    cout << "Gracias por jugar!" << endl;
    return 0;
}