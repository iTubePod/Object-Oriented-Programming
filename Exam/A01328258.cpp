#include "Pila.h"
#include "Cola.h"
//this

Cola * invertirCola(Cola *ori)
{
	Pila *inc = new Pila();
	while (!ori->isEmpty())
	{
		inc->push(ori->dequeue());
	}
	Cola *out = new Cola();
	while (!inc->isEmpty())
	{
		out->enqueue(inc->pop());
	}
	return out;
}

Pila * invertirPila(Pila *ori)
{
	Pila *out = new Pila();
	while (!ori->isEmpty())
	{
		out->push(ori->pop());
	}
	return out;
}

int main()
{
  Pila *x = new Pila();
  x->push(12);
  x->push(13);
  x->push(14);
  
  cout<<"Pila original "<<endl;
  x->print();
  cout<<endl;
  
  Pila *y = new Pila();
  y = invertirPila(x);
  cout<<"Pila invertida "<<endl;
  y->print();

  cout<<"\n-------------------------"<<endl<<endl;

  Cola *q = new Cola();
  q->enqueue(9);
  q->enqueue(8);
  q->enqueue(7);
  q->enqueue(6);
  q->enqueue(5);
  q->enqueue(4);

  cout<<"Cola original "<<endl;
  q->print();
  cout<<endl;

  Cola *q2 = new Cola();
  q2 = invertirCola(q); 

  cout<<"Cola invertida "<<endl;
  q2->print();
  cout<<endl;
 
  int loop;
  cin >> loop;
  return 0;
}
