#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(22);
    l.push_back(9);
    l.push_back(12);
    l.push_back(535);
    l.push_front(10);

    list<int>::iterator it;
    l.sort();
    l.reverse();
    for(it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}