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
    l.push_front(20);

    cout<<"Front Number "<<l.front()<<endl;
    cout<<"Back Number "<<l.back()<<endl;

    

    return 0;
}