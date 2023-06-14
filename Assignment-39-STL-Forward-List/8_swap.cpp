#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list<int> forwardlist1={3,2,9};
    forward_list<int> forwardlist2={8,1,2};

    forwardlist1.swap(forwardlist2);
    cout<<"List 1\n";
    for(auto i : forwardlist1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"List 2\n";
    for(auto i : forwardlist2)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}