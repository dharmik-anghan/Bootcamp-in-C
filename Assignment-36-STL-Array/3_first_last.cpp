#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
    array<int,5> values {10,20,30,40,50};

    cout<<values[0]<<endl;
    cout<<values[values.size()-1]<<endl;

    cout<<values.front()<<endl;    
    cout<<values.back()<<endl;    

    return 0;
}