#include <iostream>

using namespace std;

int main()
{
    int a=96, b=69, t;

    cout<< "a = " << a <<", b = " << b<<endl;

    t=a+b;
    a=t-a;
    b=t-b;

    cout<< "a = " << a <<", b = " << b<<endl;    

    return 0;
}