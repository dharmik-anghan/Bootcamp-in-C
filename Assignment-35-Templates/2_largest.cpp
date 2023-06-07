#include <iostream>
using namespace std;

template <class A, class B, class C>
C Largest_two(A num1, B num2){
    return (num1>num2) ?  num1 :  num2;
}


int main()
{

    cout<<"Largets int Number is "<<Largest_two<int,int,int>(12,32)<<endl;
    cout<<"Largets float Number is "<<Largest_two<float,float,float>(12.2,3.12)<<endl;

    return 0;
}