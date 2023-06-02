#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("a.txt", ios::app);

    ifstream fin;
    fin.open("1.txt");

    char str;
    while(!fin.eof())
    {
        fin.get(str);

        if(str >= 'a' && str<= 'z')
        {
            str = toupper(str);
        }
        else if(str>='A' && str<= 'Z')
        {
            str = tolower(str);
        }
        fout<<str;
    }
    fin.close();
    fout.close();

    return 0;
}