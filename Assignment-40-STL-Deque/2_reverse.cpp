#include <bits/stdc++.h>
using namespace std;


int main()
{
    deque<int> d = {1,2,3,45,6};

    for(auto it = d.rbegin(); it != d.rend(); it++)
    {
        cout<<*it<<" ";
    }

    return 0;
}