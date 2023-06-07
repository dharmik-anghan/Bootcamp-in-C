#include <iostream>
using namespace std;

template <class T>
T Sum(T num1, T num2)
{
    return num1+num2;
};

int main()
{   
    cout<<"Int "<<Sum<int>(2,4)<<endl;
    cout<<"Float "<<Sum<float>(2.2,4.6)<<endl;

    return 0;
}
