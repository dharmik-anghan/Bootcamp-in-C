// Write a function using the default argument that is able to add 2 or 3 numbers.

#include <iostream>
using namespace std;
int sum(int, int, int=0);

int sum(int x , int y, int z)
{
    return x+y+z;
}

int main()
{
    int a =4, b=5, c= 8, d=34, f=65;

    cout<<sum(d,f)<<endl;
    cout<<sum(a, b, c)<<endl;

    return 0;
}