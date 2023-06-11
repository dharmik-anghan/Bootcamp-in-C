#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v {5};
    v.push_back(15);
    v.push_back(10);
    v.push_back(20);
    v[0] = 4;

    cout<<v.at(1)<<endl;
    for(int i : v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    sort(v.begin(), v.end(), greater<>());

    for(int i : v)
    {
        cout<<i<<" ";
    }
    return 0;
}