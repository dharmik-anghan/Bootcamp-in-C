#include <iostream>
using namespace std;

class Complex
{
    private:
        int real, img;
    public:
        Complex() { }
        Complex(int a, int b)
        {
            real = a;
            img = b;
        }
        Complex(int a)
        {
            real = a;
            img = a;
        }
        void display()
        {
            cout<<"Real = "<<real<<" Img = "<<img<<endl;
        }

};

int main()
{
    Complex c1(4,6);
    Complex c2;
    int x=5;

    c2=x;

    c1.display();
    c2.display();
    

    return 0;
}