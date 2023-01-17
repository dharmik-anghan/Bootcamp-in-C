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
};

int main()
{
    Complex c1, c2;
    c1.setValue(4, 5);
    c2.setValue(5, 9);

    c1.print();
    c2.print();

    return 0;
}
