#include <bits/stdc++.h>
using namespace std;

bool areSimilar(string s1, string s2)
{
    int N = s1.size();
    int M = s2.size();

    if(N == M){
        if(s1 == s2)
            return true;
        
        return false;
    }

    deque<string> X, Y;

    s1.push_back(' ');
    s2.push_back(' ');

    string temp = "";

    for(int i = 0; i < N + 1; i++)
    {
        if(s1[i] != ' ')
            temp = temp + s1[i];
        else{
            X.push_back(temp);
            temp = "";
        }
    }
    for(int i = 0; i < M + 1; i++)
    {
        if(s2[i] != ' ')
            temp = temp + s2[i];
        else{
            Y.push_back(temp);
            temp = "";
        }
    }

    while(X.size() > 0 && Y.size() > 0 && X.front() == Y.front()){
        X.pop_front();
        Y.pop_front();
    }
    while(X.size() > 0 && Y.size() > 0 && X.back() == Y.back()){
        X.pop_back();
        Y.pop_back();
    }

    if(X.size() == 0 || Y.size() == 0)
        return true;
    
    return false;
}

int main()
{
    string s1 = "Start Practicingg on Ineurlon";
    string s2 = "Start Ineuron";

    if(areSimilar(s1,s2))
        cout<<"True "<<endl;
    else
        cout<<"False "<<endl;

    return 0;
}