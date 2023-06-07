#include <iostream>
using namespace std;

template <class A, class B>
void swap(A &num1, B &num2)
{
    cout<<num1<<" "<<num2<<endl;
    double temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<num1<<" "<<num2<<endl;

}

int main()
{
    float x = 25.45;
    float y = 45.5;
    swap<float,float>(x,y);
    cout<<x<<" "<<y;

    return 0;
}

