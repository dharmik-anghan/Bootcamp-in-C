#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        Complex() {}
        Complex(Complex &c)
        {
            real = c.real;
            img = c.img;
        }
        Complex(int real, int img):real(real),img(img)
        {

        }
        void setData(int r, int i)
        {
            real = r;
            img = i;
        }
        void display()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        Complex operator=(Complex c)
        {
            real = c.real;
            img = c.img;

            return c;
        }
};

int main()
{
    Complex c1(3,10);
    Complex c2 = c1;
    Complex c3;

    c3=c2;

    c1.display();
    c2.display();
    c3.display();

    return 0;
}