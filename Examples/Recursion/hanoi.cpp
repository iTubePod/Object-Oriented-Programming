#include <iostream>

using namespace std;

void hanoi(int n, char a, char b, char c)
{
   if (n == 1)
   {
      cout<<"Mover de "<<a<<" a "<<c<<endl;
   }
   else
   {
     hanoi(n-1,a,c,b);
     cout<<"Mover de "<<a<<" a "<<c<<endl;
     hanoi(n-1,b,a,c);
   }
}

int main()
{
  hanoi(3,'A','B','C');
}
