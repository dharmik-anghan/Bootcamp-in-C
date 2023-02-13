#include <iostream>
using namespace std;

int main()
{
    float num1, num2, ans;
    char Operator;

    cout<<"\n Perform Operation";
    cout<<"\n -----------------";

    try
    {
        cout<<"\n Enter First Number    :   ";
        cin>>num1;
        if(num1 == 0)
            throw 0;
        cout<<"\n Enter Operator        :   ";
        cin>>Operator;
        if(Operator != '+' && Operator != '-' && Operator != '*' && Operator != '/')
            throw Operator;
        cout<<"\n Enter Second Number    :   ";
        cin>>num2;

        switch (Operator)
        {
        case '+':
            ans = num1 + num2;
            break;
        case '-':
            ans = num1-num2;
            break;
        case '*':
            ans = num1 * num2;
        case '/':
            if(num2 ==0)
                throw 0;
            ans = num1/num2;
        }

        cout<<"Answer   :   "<<ans<<endl;

    }
    catch(char c)
    {
        cout<<"\n Exceptin Caught... \n Bad Operator : "<<c<<" is not a valid OPerator."<<endl;
    }
    catch(int i)
    {
        cout<<"\n Error: Bad Operation..."<<endl;
    }

    return 0;
    
}   