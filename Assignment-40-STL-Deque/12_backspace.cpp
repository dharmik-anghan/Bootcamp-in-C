#include <bits/stdc++.h>
using namespace std;

string newString(string s)
{
    deque<char> q;

    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] != '#')
            q.push_back(s[i]);
        else if(!q.empty())
            q.pop_back();
    }

    string ans = "";

    while(!q.empty())
    {
        ans = ans + q.front();
        q.pop_front();
    }

    return ans;

}

int main()
{
    string s =  {"abc#de#f#ghi#jklmn#op#"};

    cout<<newString(s);

    return 0;
}