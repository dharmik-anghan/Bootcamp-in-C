#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout;
    string line;

    fout.open("E:/MySIrG/Assignment-34-File-Handling/1.txt", ios :: trunc | ios :: in | ios :: out);

    try
    {
        if(!fout)
            throw 'c';
        else{
            while(fout)
            {
                getline(cin, line);

                if(line == "-1")
                {
                    break;
                }
                fout<<line;
            }
            cout<<"File Successfully Created"<<endl;
        }
    }
    catch(char c)
    {
        cout<<"File not created or Not able to open the file"<<endl;
    }

    fout.close();

    ifstream fin;
    fin.open("E:/MySIrG/Assignment-34-File-Handling/1.txt");

    fin.seekg(0, ios :: beg);
    while(fin)
    {
        getline(fin, line);
        cout<<line;
    }
    fin.close();

    return 0;
}