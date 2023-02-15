#include <iostream>
using namespace std;

int CheckMobile(double num)
{
    int length = 0;

    while(num >= 1)
    {
        num /= 10;
        length++;
    }

    return length;
    
}
int main()
{
    double num;
    cout<<"Enter Mobile Number  :   \n";
    cin>>num;

    try
    {
        int r = CheckMobile(num);
        if(r == 10)
            cout<<"Mobile Number Accepted!!!\n";
        else
            throw 'c';
    }
    catch(char c){
        cout<<"Exception Caught...\nEnter Valid Mobile Number!!!\n";
    }
    catch(...){
        cout<<"Default Exception\n";
    }

    return 0;
}