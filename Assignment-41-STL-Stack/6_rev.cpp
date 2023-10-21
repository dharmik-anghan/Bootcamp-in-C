#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;
    string str = "Reverse me";
    string c;
    for(int i  = 0; i < str.size(); i++)
    {
        c = str[i];
        s.push(c);
    }
    
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }


    return 0;
}