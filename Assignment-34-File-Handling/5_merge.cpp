#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream f1;
    f1.open("a.txt");

    ifstream f2;
    f2.open("1.txt");

    ofstream fout;
    fout.open("merge.txt");

    string str;
    while(!f1.eof())
    {
        getline(f1, str);
        fout<<str;        
    }
    while(!f2.eof())
    {
        getline(f2, str);
        fout<<str;        
    }
    f2.close();
    f1.close();
    fout.close();

    return 0;
}