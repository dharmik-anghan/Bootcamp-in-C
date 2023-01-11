#include <iostream>
using namespace std;
void swap(int &, int&);
int main()
{
    int a=96, b=69;
    cout<<"a="<<a<<", b="<< b<<endl;

    swap(a,b);
    cout<<"a="<<a<<", b="<< b<<endl;

    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}

