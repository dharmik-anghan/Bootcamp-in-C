#include <iostream>
using namespace std;
void higestnumbber(int a);

int main()
{
    int a = 2394876;
    higestnumbber(a);

    return 0;
}

void higestnumbber(int a)
{
    int max=0, x;
    x = a;

    while(a!= 0)
    {
        int modulo = a%10;
        a = a/10;
        if(modulo >= max)
            max = modulo;
    }

    cout<<max<<endl;
}