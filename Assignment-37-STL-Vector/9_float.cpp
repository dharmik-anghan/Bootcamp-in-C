#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<float> v {5.4};
    v.push_back(15.5);
    v.push_back(10.2);
    v.push_back(20.9);
    v[0] = 4.3;

    for(auto i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}