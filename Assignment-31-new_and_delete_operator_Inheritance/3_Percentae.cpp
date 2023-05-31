#include <iostream>
using namespace std;

class Base
{
    protected:
        float s1,s2,s3;
    public:
        void accept()
        {
            cout<<"Enter 3 Subjects marks: ";
            cin>>s1>>s2>>s3;
        }
};
class A : public Base
{
    protected:
        float total;
    public:
        void totalOfS()
        {
            total = s1+s2+s3;
        }
};

class B : public A
{
    private:
        float percent;

    public:
        void percentage()
        {
            percent = (total/300)*100;
        }
        void display()
        {
            cout<<"Percentage = "<<percent<<endl;
        }

};

int main()
{
    
    B b;
    b.accept();
    b.totalOfS();
    b.percentage();
    b.display();

    return 0;
}