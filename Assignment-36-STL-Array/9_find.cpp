#include <iostream>
#include <array>
using namespace std;

int OddInteger(array<int,5> arr)
{
    int result = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        result = result^arr[i];
    }
    return result;
}

int main()
{
    array<int,5> arr {4,1,4,9,1};

    int result = OddInteger(arr);

    cout<< result <<endl;


    return 0;
}