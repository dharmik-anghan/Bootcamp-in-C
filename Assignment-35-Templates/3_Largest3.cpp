#include <iostream>
using namespace std;

template <class A, class B, class C,class D>
D Largest_two(A num1, B num2, C num3){
    return ((num1>num2)||(num1>num3)) ?  num1 :  num2>num3 ? num2 : num3;
}


int main()
{

    cout<<"Largets int Number is "<<Largest_two<int,int,int,int>(812,32,12)<<endl;
    cout<<"Largets float Number is "<<Largest_two<float,float,float,float>(25.2,3.12,23.0)<<endl;

    return 0;
}