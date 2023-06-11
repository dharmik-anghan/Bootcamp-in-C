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

    sort(v.begin(), v.end());

    cout<<"Smallest element: "<<v.front()<<endl;
    cout<<"Largest element: "<<v.back()<<endl;
    return 0;
}