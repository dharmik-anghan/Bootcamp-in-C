#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v {5};
    v.push_back(15);
    v.push_back(10);
    v.push_back(20);
    v[0] = 4;

    cout<<"Which number you wants to find\n";
    int n, flag = -1;
    cin>>n;

    for(auto i : v)
    {
        if(n == i)
        {
            flag = 0;
            cout<<"Yes, Value is avilable\n";
        }
    }
    if(flag == -1)
    {
        cout<<"Value is not there!\n";
    }
    
    return 0;
}