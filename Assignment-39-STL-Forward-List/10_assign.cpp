#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list<int> f1;
    forward_list<int> f2;
    forward_list<int> f3;

    f1.assign({3,1,6,9,2,8,12,13,13});
    f2.assign(5,10);

    

    f3.assign(f1.begin(), f1.end());

    f1.sort();
    for(auto i : f1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for(auto i : f2)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    f3.unique();
    f3.sort();
    f3.erase_after(f3.begin());
    
    for(auto i : f3)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}