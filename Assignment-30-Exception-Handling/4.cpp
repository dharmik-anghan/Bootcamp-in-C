#include <iostream>
using namespace std;

bool ValidmailCheck(char *mail)
{
    int AtOfset = -1, DotOfset = -1, length = 0;

    for(int i=0; mail[i] != '\0';i++)
    {
        if(mail[i] == '@')  
            AtOfset = i;
        else if(mail[i] == '.')
            DotOfset = i;

        length++;

    }
    if(AtOfset == -1 || DotOfset == -1)
        return 0;
    if(AtOfset > DotOfset)
        return 0;

    return !(DotOfset >= (length-1));
}
int main()
{
    char mail[100];
    try
    {
        cout<<"Enter Email ID   :   "<<endl;
        cin>>mail;

        if(ValidmailCheck(mail))
        {
            cout<<"\nEmail ID is Valid.";
        }
        else 
            throw 'c';
    }
    catch(char x){
        cout<<"\nException Caught...\n Invalid Email ID!!!";
    }
    catch(...)
    {
        cout<<"\nDefault Exception";
    }
    return 0;
}