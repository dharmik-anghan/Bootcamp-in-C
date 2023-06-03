#include <iostream>
#include <string>
using namespace std;

class Person
{
    protected:
        string name;
        int age;
    public:
        Person(){
            cout<<"DC Called Person()\n";
        }
        Person(string name, int age){
            this->age = age;
            this->name = name;
            cout<<"Person PC Called\n";
        }
};

class Student : public Person{
    private:
        int rank;
    public:
        Student():Person()
        {
            cout<<"Student DC Called\n";
        }
        Student(int rank, string name, int age):Person(name, age)
        {
            this->rank=rank;
            cout<<"Student PC Called\n";
        }
        void show_data(){
            cout<<"Student Name : "<<name<<" Age : "<<age<<" Rank : "<<rank<<endl;
        }
};

int main()
{
    Student s(1, "Dharmik", 21);
    Student s2(2, "Princy", 19);

    s.show_data();
    s2.show_data();

    return 0;
}