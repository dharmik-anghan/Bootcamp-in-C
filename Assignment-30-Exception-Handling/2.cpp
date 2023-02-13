#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'e';
    }
    catch(char x)
    {
        cout<<"Exception Caught "<<"'"<<x<<"'"<<endl;
    }

    return 0;
}