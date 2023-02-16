#include <iostream>
#include <string.h>
using namespace std;

int checkGmail(char *str)
{
    int AtSign = 0, j=0;
    char mail[11];

    strcpy(mail, "@gmail.com");

    for(int i=0; str[i] != '\0'; i++)
    {
        if(str[i] == '@')
            AtSign = i;
    }

    for(int i=AtSign; str[i] != '\0'; i++)
    {
        if(str[i] == mail[j])
        {
        }
        else
            return 0;
        j++;
    }

    return 1;
}
int main()
{
    cout<<"Enter Gmail  :   \n";
    char mail[100];
    cin>>mail;

    try
    {
        if(checkGmail(mail))
        {
            cout<<"It's Gmail ID!!!\n";
        }
        else
            throw 'c';
    }
    catch(char c)
    {
        cout<<"Exception caugth...\nNot Gmail ID!!!\nPlease enter gmail id only!!!\n";
    }



    return 0;
}