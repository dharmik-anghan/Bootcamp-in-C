#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list<int> f3;

    f3.assign({3,1,6,2,9,2,8,12,13,13});
    
    f3.remove(2);
    f3.remove(13);
    
    for(auto i : f3)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}