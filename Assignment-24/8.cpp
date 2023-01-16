// Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle

#include<iostream>
using namespace std;

int area(int l, int b)
{
    return l*b;
}
float area(int r)
{
    return 3.14*r*r;
}
float area(float b, float h)
{
    return (0.5*b*h);
}

int main()
{
    int l=4, b=6;
    cout<<area(l,b)<<endl;

    int r = 4;
    cout<<area(r)<<endl;

    float c = 23, h=3.2;
    cout<<area(c, h);

    

    return 0;
}