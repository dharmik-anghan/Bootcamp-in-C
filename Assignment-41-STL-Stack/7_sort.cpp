#include <bits/stdc++.h>
using namespace std;

stack<int> Sort(stack<int> s)
{
    stack<int> temp;


    while(!s.empty())
    {
        int topInputStack = s.top();
        s.pop();
        while(!temp.empty() && temp.top()< topInputStack)
        {
            int topTempStack = temp.top();
            temp.pop();
            s.push(topTempStack);
        }
        temp.push(topInputStack);
    }

    return temp;
}

int main()
{
    stack<int> s,s1;

    s.push(50);
    s.push(100);
    s.push(80);
    s.push(10);

    s1 = Sort(s);

    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }

    return 0;
}