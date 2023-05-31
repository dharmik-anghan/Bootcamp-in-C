#include <iostream>
using namespace std;

class Base
{
    protected:
        int x,y;
    public:
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        void accept()
        {
            int a, b;
            cout<<"Enter Two Number: ";
            cin>>a>>b;

            x = a;
            y = b;
        }
        
};
class Derived : public Base
{
    private:
        int sum;
    public:
        void Add()
        {
            sum = x + y;
        }
        void display()
        {
            cout<<"The Sum of "<<getX()<<" and "<<getY()<<" is "<<sum<<endl;
        }
};

int main()
{
    Derived d1;
    d1.accept();
    d1.Add();
    d1.display();

    return 0;
}