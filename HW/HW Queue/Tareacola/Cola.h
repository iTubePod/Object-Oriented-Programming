#include <iostream>
#include <vector>
#include <list>


using namespace std;
template <class C>
class Cola {
    
private:
    std::vector <int> Q;
    
public:
    Cola();
    
    void enqueue(int x);
    void dequeue ();
    void front();
    bool isEmpty();
    void print();
};
template <class C>
Cola<C>::Cola()
{
}
template <class C>
void Cola<C>::enqueue(int x)
{
    Q.push_back(x);
}
template <class C>
void Cola<C>::dequeue ()
{
    int ot;
    ot=Q[0];
    std::swap(Q[0], Q.back());
    Q.pop_back();
    std::swap(Q[0], Q[1]);
    std::swap(Q[1], Q.back());
    cout<<ot<<endl;
}

template <class C>
void Cola<C>::front()
{
    cout<<Q[0]<<endl;
}
template <class C>
bool Cola<C>::isEmpty()
{
    if (Q.size() == 0)
        return true;
    return false;
}
template <class C>
void Cola<C>::print()
{
    for (int i = 0; i<Q.size(); i++)	{
        cout << Q[i] << endl;
    }
    
}


