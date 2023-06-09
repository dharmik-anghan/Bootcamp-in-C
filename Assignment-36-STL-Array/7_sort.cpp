#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int main()
{
    array<int,5> arr {10,1,20,2,3};


    sort(arr.begin(), arr.end());

    cout<<"Sorted Elements are : ";
    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";


    return 0;
}