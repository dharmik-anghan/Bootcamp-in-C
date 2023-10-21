#include <bits/stdc++.h>
using namespace std;


int main()
{
    deque<int> d = {1,2,3,45,6};

    deque<int>::const_iterator it = d.begin();

    cout<<d.max_size()<<endl;

    for( it = d.begin(); it != d.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}