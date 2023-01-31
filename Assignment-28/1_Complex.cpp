#include <iostream>
using namespace std;

class Complex
{
    private:
        int real;
        int img;
    public:
        void setData(int r, int i)
        {
            real = r;
            img = i;
        }

        friend ostream& operator<<(ostream &os, Complex &c);
        friend istream& operator>>(istream &in, Complex &c);
        void display()
        {
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

ostream& operator<<(ostream &os, Complex &c)
{
    cout<<c.real<<" + "<<c.img<<"i"<<endl;
    return os;
}
istream& operator>>(istream &in, Complex &c)
{
    cout<<"Enter Real and Imagenary part: "<<endl;
    in>>c.real>>c.img;

    return in;
}

int main()
{
    Complex c1,c2;

    c1.setData(3, 4);
    cin>>c2;
    cout<<c1<<c2;

    return 0;
}
