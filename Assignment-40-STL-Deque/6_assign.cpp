#include <bits/stdc++.h>
using namespace std;


int main()
{
    deque<int> d = {1,2,3,45,6};
    deque<int> d1;

    d1.assign(d.begin(), d.end());

    deque<int>::const_iterator it = d.begin();

    cout<<d.max_size()<<endl;
    for(auto i : d1)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    for( it = d.begin(); it != d.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}