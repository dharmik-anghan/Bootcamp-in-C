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
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.real = real + C.real;
            temp.img = img + C.img;

            return temp;
        }
        Complex operator-(Complex C)
        {
            Complex temp;
            temp.real = real - C.real;
            temp.img = img - C.img;

            return temp;
        }
        Complex operator*(Complex C)
        {
            Complex temp;
            temp.real = real * C.real;
            temp.img = img * C.img;

            return temp;
        }
        int operator==(Complex C)
        {
            if(real == C.real && img == C.img)
                return true;
            else
                return false;
        }
        void display()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }                                                                                                                                                                                    
};

int main()
{
    Complex c1(3,5);
    Complex c2(3,5);
    Complex c3,c4,c5;

    c3 = c1 + c2;
    c4 = c1 - c2;
    c5 = c1 * c2;

    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();

    if(c1 == c2)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal"<<endl;

    return 0;
}
