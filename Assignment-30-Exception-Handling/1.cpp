#include <iostream>
using namespace std;

void test_try(int num)
{
    try
    {
        if(num>=0 && num<=9)
            throw num;
        else
            cout<<"\nIt is not a Single Number ";
        throw;
    }
    catch(int a)
    {
        cout<<"\nIt is a Single Number";
    }
    catch(char b[100])
    {
        cout<<b;
    }
}
int main()
{
    int num;
    cout<<"Enter Number: \n";
    cin>>num;
    test_try(num);
    return 0;
}
