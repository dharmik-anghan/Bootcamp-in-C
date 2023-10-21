#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int x;

    for(int i =0; !s.empty(); i++)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;


    return 0;
}