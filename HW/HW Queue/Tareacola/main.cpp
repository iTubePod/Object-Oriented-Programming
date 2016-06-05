#include "Cola.h"

int main ()
{
    Cola<int> *col;
    col = new Cola<int>();
    
    col->enqueue(12);
    col->enqueue(13);
    col->enqueue(14);
    col->enqueue(15);
    cout<<"All in queue"<<endl;
    col->print();

    cout<<"DEQUEUE FUNCTION"<<endl;
    cout<<"Removed value: ";
    col->dequeue();
    cout<<"Queue after dequeue function:"<<endl;
    col->print();
    
    int x;
    cout<<"GIVE ME THE VALUE TO ADD TO THE QUEUE"<<endl;
    cin>>x;
    col->enqueue(x);
    
    cout<<"QUEUE AFTER ENQUEUE FUNCTION"<<endl;
    col->print();

    
    cout<<"FRONT FUNCTION"<<endl;
    col->front();
    

    
    return 0;
}
