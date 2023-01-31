#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        Complex() {}
        Complex(int real, int img):real(real),img(img)
        {

        }
        void setData(int real, int img)
        {
            this->real = real;
            this->img = img;
        }
        void display()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main()
{
    Complex c1(3,4);
    Complex c2;

    c2.setData(12,10);


    c1.display();
    c2.display();

    return 0;
}