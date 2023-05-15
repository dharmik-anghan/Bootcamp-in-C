#include <iostream>
using namespace std;

int plaindrome(int x)
{
    int rev=0, rem = 0, temp = x;


    while(temp != 0)
    {
        rem = temp%10;
        rev = (rev*10) + rem;
        temp = temp/10;
    }

    if(rev == x)
        return 1;
    else
        return 0;
}

int main()
{
    int x = -121
    if(x<0)
    {
        cout<<"False";
        return 0;
    }
    if(plaindrome(x))
    {
        cout<<"True";
    }
    else
        cout<<"False";

    return 0;
}
