#include <iostream>
using namespace std;


int checkpassword(char *str)
{
    int charactor = 0, number = 0, symbol = 0, length = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            charactor++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            number++;
        }
        else if(str[i] == '@' || str[i] == '#')
        {
            symbol++;
        }
        else
        {
            return 0;
        }
    }
    
    length = charactor + number + symbol;

    if(length>=6 && !(charactor == 0 || number == 0 || symbol == 0))
        return length;
    else
        return 0;
}
int main()
{
    char password[50];

    cout<<"Enter password   :   ";
    cin>>password;

    try
    {
        if(checkpassword(password))
        {
            cout<<"Valid password!!!\n";
        }
        else
            throw 'c';
    }
    catch(char c)
    {
        cout<<"Exception Caugth...\nInvalid password!!!\n";
    }

    return 0;

}