#include <iostream>
#include <vector>
#include <string>

using namespace std;
template <class T>

class Stack {
private:
    vector <char> p;
    
public:
    Stack();
    
    void push(char x);
    T pop();
    T top();
    bool isEmpty();
    
    void print();
};
template <class T>
Stack<T>::Stack(){
}

template <class T>
void Stack<T>::push(char x)
{
    p.push_back(x);
}

template <class T>
T Stack<T>::pop()
{
    T x = p[p.size() - 1];
    p.pop_back();
    return x;
}

template <class T>
T Stack<T>::top()
{
    return p[p.size() - 1];
}

template <class T>
bool Stack<T>::isEmpty()
{
    if (p.size() == 0)
        return true;
    return false;
}

template <class T>
void Stack<T>::print()
{
    cout << p[p.size() - 1] << "<- tope" << endl;
    for (int i = (p.size()-2); i >= 0; i--)	{
        cout << p[i] << endl;
    }
}