#include <bits/stdc++.h>
using namespace std;


int main()
{
    deque<int> d = {1,2,3,45,6};

    deque<int>::iterator it = d.begin();
    it++;
    it++;
    d.insert(it,25);

    for(auto i : d)
    {
        cout<<i<<" ";
    }

    return 0;
}