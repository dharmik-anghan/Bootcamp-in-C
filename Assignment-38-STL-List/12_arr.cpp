#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    list<int>::iterator it;
    
    int arr[] = {2,3,5,6};

    l.assign(arr, arr+4);
    for(it = l.begin(); it != l.end(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}