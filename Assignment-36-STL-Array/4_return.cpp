#include <iostream>
#include <array>
#include <tuple>
using namespace std;

int main()
{
    array<int,5> values {10,20,30,40,50};

    cout<<values.at(3)<<endl;
    cout<<get<0>(values)<<endl;

    cout<<get<1>(values)<<endl;
    return 0;
}