#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list<int> f1 {3,2,9,10,25,76,34};
    
    for(auto i : f1)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}