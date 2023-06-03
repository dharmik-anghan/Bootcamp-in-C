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
        void displayPerson(){
            cout<<"Student Name : "<<name<<" \nAge : "<<age<<endl;
        
        }
};

class Student : public Person{
    private:
        string batch;
    public:
        string getBatch()
        {
            return batch;
        }
        Student():Person()
        {
            cout<<"Student DC Called\n";
        }
        Student(string name, int age, string batch):Person(name, age)
        {
            this->batch=batch;
            cout<<"Student PC Called\n";
        }
        void displayStudent(){
            displayPerson();
            cout<<"Batch is : "<<batch<<endl;
        }
};

class Topper : public Student{
    private:
        int rank;
    public:
        Topper(string name,int age, string batch, int rank) : Student(name,age,batch)
        {
            this->rank = rank;
        }
        void displayTopper(){
            displayPerson();
            cout<<"Batch is : "<<getBatch()<<endl;
            cout<<"Rank : "<<rank<<endl;
        }
};

int main()
{
    Topper s("Dharmik", 21, "C/C++ bootcamp", 1);
    s.displayTopper();
    cout<<endl;

    s.displayStudent();
    cout<<endl;

    s.displayPerson();
    cout<<endl;

    return 0;
}