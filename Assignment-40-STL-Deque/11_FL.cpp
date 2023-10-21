#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<string> s1;
    
    s1.push_back("D");
    s1.push_back("H");
    s1.push_back("A");
    s1.push_back("R");
    s1.push_back("M");
    s1.push_back("I");
    s1.push_back("K");

    cout<<"Front: "<<s1.front()<<endl;
    cout<<"Back: "<<s1.back()<<endl;

    return 0;
}