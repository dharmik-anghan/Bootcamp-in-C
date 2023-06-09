#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
    array<int,5> values {10,20,30,40,50};
    array<string, 4> name {"DHARMIK"};

    for(string i : name)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"element at index [0] "<<values[0]<<endl;
    cout<<"element at index [1] "<<values[1]<<endl;
    cout<<"element at index [2] "<<values[2]<<endl;
    cout<<"element at index [3] "<<values[3]<<endl;
    cout<<"element at index [4] "<<values[4]<<endl;

    values[0]=100;
    values[4]=500;

    cout<<"All Elements\n"<<endl;
    for(int i : values)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}