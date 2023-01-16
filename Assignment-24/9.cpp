#include <iostream>
using namespace std;
int max(int , int );
float max(float , float );


int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
float max(float a, float b)
{
    if(a>b)
        return a;
    else
        return b;
}
int main()
{
    int a=4, b=6;
    cout<<"MAX = "<<max(a,b)<<endl;

    float c=45.3, d=13.21;
    cout<<"MAX = "<<max(c,d)<<endl;

    return 0;

}