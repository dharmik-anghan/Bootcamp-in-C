#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x+y;
}
float add(float x, float y)
{
    return x+y;
}

int main()
{
    int x = 34, y=56;
    float a=43.3, b=32;

    cout<<add(x,y)<<endl;
    cout<<add(a,b)<<endl;

    return 0;
}