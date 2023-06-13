#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<char> l;

    l.push_back('D');
    l.push_back('H');
    l.push_back('A');
    l.push_back('R');
    l.push_back('m');
    l.push_back('i');
    l.push_back('k');

    list<char>::iterator it;
    for(it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}