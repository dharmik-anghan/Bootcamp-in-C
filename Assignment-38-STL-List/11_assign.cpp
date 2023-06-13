#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l,l2;

    l.push_back(23);
    l.push_back(12);
    l.push_back(3);
    l.push_back(57);
    l.push_front(1);
    l.push_front(246);
    l.push_front(246);
    l.push_front(246);
    l.push_front(246);

    list<int>::iterator it;
    l.remove(246);

    l2.assign(l.begin(), l.end());
    for(it = l2.begin(); it != l2.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}