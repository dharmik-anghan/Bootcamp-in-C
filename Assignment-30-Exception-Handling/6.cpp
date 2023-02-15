#include <iostream>
using namespace std;

int main()
{
    int pin, length =0;

    cout<<"Enter PINCODE    :   \n";
    cin>>pin;   

    int temp = pin;
    while(temp != 0)
    {
        temp /= 10;
        length++;
    }

    try
    {
        if(length == 6)
        {
            cout<<"PINCODE ACCEPTED!!!\n";
        }
        else
            throw 'c';
    }
    catch(char c)
    {
        cout<<"Exception Caught...\nPINCODE INVALID!!!\n";
    }

    return 0;
}