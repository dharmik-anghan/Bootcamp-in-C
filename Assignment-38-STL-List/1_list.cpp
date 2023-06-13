#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    cout<<l.empty()<<endl;


    cout<<endl;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(5);
    l.push_front(5);
    l.push_front(5);
    cout<<l.back()<<endl;
    cout<<l.front()<<endl;

    list <int>::iterator it;
    it = l.begin();
    l.insert(it, 100);
    l.insert(it, 200);
    l.sort();
    l.unique();
    l.erase(l.begin());

    l.remove(100);
    cout<<l.size()<<endl;
    



    for(auto i : l)
    {
        cout<<i<<" ";
    }
}