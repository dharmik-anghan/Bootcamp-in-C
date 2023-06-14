#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main()
{
    forward_list<int> f1;

    for(int i = 10;i > 0; i--)
    {
        f1.push_front(i);
    }
    int sum =0;
    f1.reverse();
    for(auto i : f1)
    {
        sum = sum +i;
    }
    cout<<sum<<endl;


    return 0;
}