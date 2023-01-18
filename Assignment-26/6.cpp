#include <iostream>
#include <string.h>
using namespace std;

class Student
{
    private:
        char name[20];
        int standard, id, mnumber;
    public:
        Student()
        {
            
        }
        void setStudent()
        {
            char n[20]; int s; int i; int m;
            cout<< "Enter Name, Standard, ID and Mo. Number: "<<endl;
            cin.ignore();
            cin.getline(n,20);
            cin>>s;
            cin>>i;
            cin>>m;

            strcpy(name, n);
            standard = s;
            id = i;
            mnumber = m;
        }  

        void showStudent()
        {
            cout<<"Student Name:  "<<name<<endl;
            cout<<"Standard:      "<<standard<<endl;
            cout<<"ID:            "<<id<<endl;
            cout<<"Mobile Number: "<<mnumber<<endl;
        }
};

int main()
{
    Student s1, s2;

    s1.setStudent();
    s2.setStudent();

    s1.showStudent();
    s2.showStudent();

    return 0;
}