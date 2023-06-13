#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    int x;
    cout<<"Enter Number: ";
    for(int i = 0; i < 5; i++)
    {
        cin>>x;
        l.push_back(x);
    }

    int sum = 0;

    for(auto i : l)
    {
        sum = sum + i;
    }

    cout<<"\nSum is "<<sum<<endl;

    return 0;
}