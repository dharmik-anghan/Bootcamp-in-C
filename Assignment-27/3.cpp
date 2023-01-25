#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        Complex()
        {
            
        } 
        Complex(int r, int i)
        {
            real = r;
            img = i;
        }
        friend Complex operator+(Complex, Complex);
        
        void display()
        {
            cout<<"Real = "<<real<<" Img = "<<img<<endl;
        }                                                                                                                                                                                    
};
 Complex operator+(Complex C1, Complex C2)
{
    Complex temp;
    temp.real = C1.real + C2.real;
    temp.img = C1.img + C2.img;

    return temp;
}
int main()
{
    Complex c1(3,5);
    Complex c2(3,5);
    Complex c3;

    c3 = c1 + c2;

    c1.display();
    c2.display();
    c3.display();
    
    return 0;
}