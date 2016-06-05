#include "Pila.h"

int main ()
{
    string input;
    Stack<char> *st;
    st = new Stack<char>();
    cin>>input;
    for (int i=0; i<input.length(); i++) {
        st->push(input[i]);
    }
    for (int i=0; i<input.length(); i++) {
        input[i]=st->pop();
    }
    for (int i=0; i<input.length(); i++) {
        cout<<input[i];
    }
    
    return 0;

}
