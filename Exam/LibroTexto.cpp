#include "LibroTexto.h"

LibroTexto::LibroTexto(string a, string t, string e, string m)
{
    autor=a;
    titulo=t;
    editorial=e;
    materia = m;
    cout<<"Constructor del Libro de Texto"<<endl;
}
void LibroTexto::imprime()
{
    void imprime();
    cout<<"La materia es: "<<materia<<endl;
}

