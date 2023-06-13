#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    list<string> l;
    list<string> l2;
    list<int> l3;

    l.assign(10, "Dharmik");

    for(auto i : l)
    {
        cout<<i<<"\n";
    }
    cout<<endl;

    l2.assign(l.begin(), l.end());

    for(auto i : l2)
    {
        cout<<i<<"\n";
    }

    int arr[] = {3,4,52,5,1};

    l3.assign(arr, arr+5);
    for(auto i : l3)
    {
        cout<<i<<"\n";
    }

    



    return 0;
}