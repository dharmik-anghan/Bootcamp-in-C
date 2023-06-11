#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    vector<int> v {5};
    v.push_back(15);
    v.push_back(10);
    v.push_back(20);
    v[0] = 4;

    vector<int>::iterator x;

    int sum = 0;
    for(x = v.begin(); x != v.end(); x++)
    {
        sum = sum + *x;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}