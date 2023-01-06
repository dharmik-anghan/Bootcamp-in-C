#include <iostream>

using namespace std;

int main()
{
    int a[10] = {976,23,24,76,86,54,98,343,8,232}, x=0;

    for(int i=0; i < 10; i++)
    {
        x += a[i];
    }   

    cout<<"TOTAL = " << x <<endl;

    return 0;
}