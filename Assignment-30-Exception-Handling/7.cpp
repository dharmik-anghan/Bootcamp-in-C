#include <iostream>
using namespace std;


int checkUserName(char *str)
{
    int length = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '@')
        {
            length++;
        }
        else 
            return 0;
    }
    if(length<=6)
        return length;
    else
        return 0;
}
int main()
{
    char userName[50];

    cout<<"Enter UserName   :   ";
    cin>>userName;

    try
    {
        if(checkUserName(userName))
        {
            cout<<"Valid UserName!!!\n";
        }
        else
            throw 'c';
    }
    catch(char c)
    {
        cout<<"Exception Caugth...\nInvalid UserName!!!\n";
    }

    return 0;

}