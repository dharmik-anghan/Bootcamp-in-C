#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v1 {5};
    v1.push_back(15);
    v1.push_back(10);
    v1.push_back(20);
    v1[0] = 4;

    vector <int>v {4,6,7,8,9,10,11};

    if(v1.size()>=v.size())
    {
        for(auto i : v1)
        {
            for(auto x : v)
            {
                if(i == x)
                    cout<<i<<" ";
            }
        }
    }
    else
    {
        for(auto i : v)
        {
            for(auto x : v1)
            {
                if(i == x)
                    cout<<i<<" ";
            }
        }
    }
    return 0;
}