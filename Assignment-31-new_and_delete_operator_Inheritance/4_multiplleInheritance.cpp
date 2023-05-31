#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
        string name,address;
        long long int phone_no;
    
        
};
class Employee : public Person
{
    protected:
        int eno;
        
};
class Manager : public Employee
{
    public:
        string designation, department_name;
        int basic_salary;
    
        string getDesignation()
        {
            return designation;
        }
        string getDepartmentName()
        {
            return department_name;
        }
        int getBasicSalary()
        {
            return basic_salary;
        }

        void accept()
        {
            cout<<"Enter Details Of Manager"<<endl;
            cout<<"----------------------------"<<endl<<endl;
            cout<<"Enter Emplyoee No.  :  ";
            cin>>eno;

            cout<<endl<<"Enter Name  :  ";
            cin.ignore();
            getline(cin, name);
            
            cout<<endl<<"Enter Address  :  ";
            getline(cin, address);

            cout<<endl<<"Enter Phone No.  :  ";
            cin>>phone_no;

            cout<<endl<<"Enter Designation  :  ";
            cin.ignore();
            getline(cin, designation);

            cout<<endl<<"Enter Department Name  :  ";
            getline(cin, department_name);

            cout<<endl<<"Enter Basic Salary  :  ";
            cin>>basic_salary;
            cout<<endl;
        }


};

int main()
{
    int i, cnt, temp;
    Manager man[100];
    cout<<"\n How Many Managers You Want to Enter?  :  ";
    cin>>cnt;
    for(i = 1; i<=cnt; i++)
    {
        man[i].accept();
    }
    temp =0;

    for(i=1; i<=cnt;i++)
    {
        if(man[temp].basic_salary < man[i].basic_salary)
            temp = i;
    }

    cout<<"\n Manager with Highest Salary is : "<<man[temp].basic_salary<<" and Manager Name is : "<<man[temp].name<<endl;

    return 0;
}

