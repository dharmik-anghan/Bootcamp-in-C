#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
        string name;
        int age;
    public:
        void setName(string s)
        {
            name = s;            
        }
        string getName()
        {
            return name;
        }
        void setAge(int a)
        {
            age = a;

        }
        int getAge()
        {
            return age;
        }
};

class Employee : public Person
{
    private:
        int empid, salary;
    public:
        void setEmpId(int x)
        {   
            empid = x;
        }
        void setSalary(int y)
        {
            salary = y;
        }
        int getEmpId()
        {
            return empid;
        }
        int getSalary()
        {
            return salary;
        }

        void printEmpInfo()
        {
            cout<<"Emp ID      : "<<getEmpId()<<endl;
            cout<<"Emp Name    : "<<getName()<<endl;
            cout<<"Emp Age     : "<<getAge()<<endl;
            cout<<"Emp Salary  : "<<getSalary()<<endl;

        }



};

int main()
{
    Employee e1;
    e1.setName("Dharmik");
    e1.setAge(21);
    e1.setEmpId(1);
    e1.setSalary(25000);
    
    e1.printEmpInfo();

    return 0;
}