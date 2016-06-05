#include <iostream>
#include <cmath>

using namespace std;

float divide(int a, int b)
{
   float result = -1.0f;

     if(b == 0)
       //throw -3;//hace que el pedazo de codigo del main salte al catch
     	throw "Error";
     else
       result = (float)a/b;

   return result; 
}

int main()
{
   float w,z;
   int x, y;

   x = 10;
   y = 0;
   
   try {//ejecuta lo del try, si no puede, se pasa al catch, si se ejecuta todo, no ejecuta el catch.
     z = divide(x,y); 
     w = 13.14f;
     w = pow(w,z);
     cout<<"Resultado "<< w <<endl;
   }
   catch(const char* e){//lo que quieres que suceda en caso de error en le ejecucion del try
      cout<<"Error al tratar de dividir entre cero, Error: "<<e<<endl;
   }


   return 0;   
}
