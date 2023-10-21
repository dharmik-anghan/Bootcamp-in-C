#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> s;

    s.push("I " );
    s.push("Love " );
    s.push("To " );
    s.push("Code " );
    
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }


    return 0;
}