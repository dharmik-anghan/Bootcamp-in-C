#include<iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("a.txt", ios::app);
    string str;
    cout<<"Enter Data:  \n";
    while(fout)
    {
        
        getline(cin,str);

        if(str == "-1")
            break;

        fout<<str;
        
    }
    return 0;
}