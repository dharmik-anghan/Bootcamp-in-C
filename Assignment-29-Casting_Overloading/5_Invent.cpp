#include <iostream>
using namespace std;

class Invent1
{
    private:
        float a, b;
    public:
        Invent1() {}
        Invent1(float x, float y)
        {
            a = x;
            b = y;
        }
        float getA()
        {
            return a;
        }
        float getB()
        {
            return b;
        }
        operator float()
        {
            return (a+b);
        }
        void display()
        {
            cout<<"A = "<<a<<" B = "<<b<<endl;
        }
};

class Invent2
{
    private:
        float c;
    public:
        Invent2() {}
        Invent2(Invent1 x)
        {
            c = x.getA()+x.getB();
        }
        void display()
        {
            cout<<"C = "<<c<<endl;
        }
};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv=s1;
    d1=s1;

    cout<<tv<<endl;
    s1.display();
    d1.display();
    return 0;
}