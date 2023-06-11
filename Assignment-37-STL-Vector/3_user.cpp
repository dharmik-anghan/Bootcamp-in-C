#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v;

    int n;
    cout<<"How many input you want to enter: ";
    cin>>n;

    cout<<"Enter Input: ";
    int x;
    for(int i =0; i < n; i++)
    {   
        cin>>x;
        v.push_back(x);
    }

    for(int i : v)
    {
        cout<<i<<" ";
    }
    
    return 0;
}