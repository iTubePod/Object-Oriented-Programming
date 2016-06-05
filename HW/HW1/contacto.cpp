#include "contacto.h"

   //Constructor
   contacto::contacto()
   {
   }
   contacto::contacto(string nombre, string apellido, string mail, string numero)
   {
    string nom = nombre;
    string ape = apellido;
    string ma = mail;
    string num = numero;
   }

   //Metodos get y set para modificar atributos

   string contacto::getNombre()
   {
      return nombre;
   }

   void contacto::setNombre(string n)
   {
      nombre = n;
   }

   string contacto::getapellido()
   {
      return apellido;
   }

   void contacto::setApellido(string ape)
   {
      apellido = ape;
   }

   string contacto::getmail()
   {
      return mail;
   }

   void contacto::setmail(string m)
   {
      mail = m;
   }
   void contacto::setnumero(string num)
   {
      numero=num;
   }
   string contacto::getnumero()
   {
   	  return numero;
   }
