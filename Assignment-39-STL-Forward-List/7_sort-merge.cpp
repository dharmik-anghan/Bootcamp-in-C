#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list<int> forwardlist1={3,2,9};
    forward_list<int> forwardlist2={8,1,2};

    forwardlist1.sort();
    forwardlist2.sort();

    forwardlist1.merge(forwardlist2);
    for(auto i : forwardlist1)
    {
        cout<<i<<" ";
    }


    return 0;
}