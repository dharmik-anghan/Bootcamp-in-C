#include <iostream>
#include <string>
using namespace std;

class Fulltime
{
    public:
        int daily_rate, number_of_days, fsalary;
};

class Parttime
{
    public:
        int working_hours, hourlly_rate, psalary;
};

class Employee
{
    public:
        int emp_code;
        string name;
    
        
};
int main()
{
    int choice;

    while(choice != 4)
    {
        cout<<"1. Enter Record\n";
        cout<<"2. Display Record\n";
        cout<<"3. Search Record\n";
        cout<<"4. Quit\n";

        cout<<endl;
        cout<<"Enter Your Choice : ";
        cin>>choice;
        cout<<endl;
        cout<<"----------------------\n";

        switch(choice)
        {
            case 1: 
        }
    }
}
