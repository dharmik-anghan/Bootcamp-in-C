#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
    array<int,5> values {10,20,30,40,50};
    array<string, 4> name {"DHARMIK"};

    cout<<name.size()<<endl;

    values[0]=100;
    values[4]=500;

    int count=0;

    cout<<"All Elements\n";
    for(auto i = values.begin(); i != values.end(); i++)
    {
        count++;
    }
    cout<<"Size of Array: "<<count;
    cout<<endl;

    return 0;
}