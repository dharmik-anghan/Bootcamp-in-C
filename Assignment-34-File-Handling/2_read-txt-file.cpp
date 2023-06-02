#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin;
    fin.open("1.txt");
    int i, c =0, sp = 0;
    fin.seekg(0,ios_base::beg);
    char ch;

    while(!fin.eof())
    {
        fin.get(ch);
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            c++;  
        else    
        {
            if(ch ==' ')
                sp++;       
        }    
    }
    cout<<"Char = "<<c<<endl;
    cout<<"Words = "<<sp+1<<endl;
    fin.close();
    return 0;
}