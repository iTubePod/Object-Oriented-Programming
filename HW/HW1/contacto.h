#include <iostream>
#include <string>

using namespace std;

class contacto {

public:

   //Atributos
   string nombre;
   string apellido;
   string mail;
   string numero;

   //Constructor
   contacto();
   contacto(string nombre, string apellido, string mail, string numero);


   string getNombre();
   void setNombre(string nom);

   string getapellido();
   void setApellido(string ape);

   string getmail();
   void setmail(string ma);

   string getnumero();
   void setnumero(string num);
    
    


};