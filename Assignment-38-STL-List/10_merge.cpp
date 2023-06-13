#include <iostream>
#include <list>
#include <array>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(23);
    l.push_back(12);
    l.push_back(3);
    l.push_back(57);
    l.push_front(1);
    l.push_front(246);

    list<int> arr {1,2,3,4,5};

    l.merge(arr);

    list<int>::iterator it;
    for(it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}