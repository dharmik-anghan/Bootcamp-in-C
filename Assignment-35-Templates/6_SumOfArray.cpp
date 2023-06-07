#include <iostream>
using namespace std;

template <class T>
T SumOfArray(T array[], int size)
{   
    T sum = 0;
    for(int i = 0;i < size; i++)
    {
        sum = sum + array[i];
    }

    return sum;
}

int main()
{
    int array1[5] = {1,2,3,4,5};
    float array2[5] = {1.1,2.3,3.4,4.8,5.1};

    cout<<"INT = "<<SumOfArray<int>(array1, 5)<<endl;
    cout<<"FLOAT = "<<SumOfArray<float>(array2, 5)<<endl;

    return 0;

}