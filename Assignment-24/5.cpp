#include <iostream>
using namespace std;

void fibcheker(int n)
{
    int i = -1, j = 1, fib=0;

    while(n!= fib && n > fib)
    {
        fib = i+j;
        i = j;
        j= fib;        
    }

    if(fib == n)
        cout<<"FIB"<<endl;
    else    
        cout<<"NOT FIB"<<endl;
}

int main()
{
    int num=1;

    fibcheker(num);

    cout<<endl;
    return 0;
    
}