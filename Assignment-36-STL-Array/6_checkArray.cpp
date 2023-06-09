#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,0> values1 {};
    array<int,5> values2 {};
    array<int,5> values3 {10,20,30,40,50};
    array<int,5> values4 {10,20,30,40,50};

    cout<<values1.empty()<<endl;
    cout<<values2.empty()<<endl;
    cout<<values3.empty()<<endl;
    cout<<values4.empty()<<endl;

    values1.empty() ? cout<<"Array is Empty\n" : cout<<"Array is not Empty\n";
    values2.empty() ? cout<<"Array is Empty\n" : cout<<"Array is not Empty\n";
    values3.empty() ? cout<<"Array is Empty\n" : cout<<"Array is not Empty\n";
    values4.empty() ? cout<<"Array is Empty\n" : cout<<"Array is not Empty\n";
    return 0;
}