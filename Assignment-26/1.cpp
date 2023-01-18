#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        void setValue(int a, int b)
        {
            real = a;
            img  = b;
        }
        void print()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
        Complex add(Complex C)
        {
            Complex temp;

            temp.real = real+C.real;
            temp.img = img+C.img;

            return temp;
        }
};

int main()
{
    Complex c1, c2, c3;
    c1.setValue(4, 5);
    c2.setValue(5, 9);

    c1.print();
    c2.print();

    c3 = c1.add(c2);

    c3.print();
    
    return 0;
}