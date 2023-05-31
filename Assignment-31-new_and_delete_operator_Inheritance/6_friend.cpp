#include <iostream>

using  namespace std;
class B;
class A
{
    protected:
        int num1;

    public:
        A()
        {
            num1 = 10;
        }
        void show()
        {
            cout<<"Value of Number 1 is "<<num1<<endl;
        }
        friend void swap(A *num1, B *num2);
};

class B
{
    protected:
        int num2;
    public:
        B()
        {
            num2 = 13;
        }
        void show()
        {
            cout<<"Value of Number 2 is "<<num2<<endl;
        }
        friend void swap(A *num1, B *num2);
};

void swap(A *no1, B *no2)
{
    int no3;
    no3 = no1->num1;
    no1->num1 = no2->num2;
    no2->num2 = no3;
}

int main()
{
    A a;
    B b;
    a.show();
    b.show();
    swap(&a,&b);
    a.show();
    b.show();

    return 0;
}