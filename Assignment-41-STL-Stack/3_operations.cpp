#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s, s1;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);    
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.empty()<<endl;
    cout<<s.size()<<endl;
    s.emplace(1);
    s.emplace(2);

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }


    return 0;
}