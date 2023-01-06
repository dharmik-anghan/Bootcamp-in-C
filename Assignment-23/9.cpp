#include <iostream>

using namespace std;

int main()
{
    int a[10] = {976,23,24,76,86,54,98,343,8,232};

    for(int i=0; i < 9; i++)
    {
        for(int j=i; j < 10; j++)
        {
            if(a[i] <= a[j])
                a[j] = a[i];
        }
    }   

    cout<<"MAX = " << a[0] <<endl;

    return 0;
}