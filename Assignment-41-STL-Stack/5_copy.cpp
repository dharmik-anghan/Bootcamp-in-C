#include <bits/stdc++.h>
using namespace std;

stack<int> Copy(stack<int> s)
{
    stack<int> s1,temp;

    while(!s.empty())
    {
        temp.push(s.top());
        s.pop();
    }
    while(!temp.empty())
    {
        s1.push(temp.top());
        temp.pop();
    }

    return s1;
}

int main()
{
    stack<int> s,s1;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);


    s1 = Copy(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }


    return 0;
}