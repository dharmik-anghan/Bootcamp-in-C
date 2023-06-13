#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(23);
    l.push_back(12);
    l.push_back(3);
    l.push_back(57);

    list<int>::iterator it;
    l.sort();
    l.reverse();
    l.remove(3);
    for(it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}