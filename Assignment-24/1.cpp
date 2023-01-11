#include <iostream>
using namespace std;
void primeornot(int);

int main()
{
    int a = 71;
    primeornot(a);

    return 0;
}

void primeornot(int a)
{
    int x=0;
    if(a==1 || a==0)
    {
        cout<<a<< " is not Prime Number"<<endl;
    }
    else
    {
        for(int i=a; i>=2; i--)
        {
            if((a%2) == 0 && a>2)
            {
                cout<<a<< " is not Prime Number"<<endl;
                x=0;
                break;
            }
            else
            {
                x=1;
            }
        }
        if(x==1)
            cout<<a << " is Prime Number"<<endl;
    }
}
