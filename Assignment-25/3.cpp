#include <iostream>
using namespace std;
void FindPower(int, int);

int main()
{
    int x = 2, y=3;
    FindPower(x,y);

    return 0;
}

void FindPower(int a, int b)
{
    int answer=1;

    for(int i=1; i <= b; i++ )
    {
        answer *= a;
    }

    cout<<answer<<endl;
    
}