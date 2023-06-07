#include <iostream>
using namespace std;

template <class T>
T Addition(T num1, T num2)
{
    return num1+num2;
};

int main()
{   
    cout<<"Int "<<Addition<int>(2,4)<<endl;
    cout<<"Float "<<Addition<float>(2.2,4.6)<<endl;

    return 0;
}
