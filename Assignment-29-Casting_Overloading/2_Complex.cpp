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
        void setData(int a, int b)
        {
            real = a;
            img = b;
        }
        void display()
        {
            cout<<real<<" "<<img<<endl;
        }
        operator int()
        {
            return (real+img);
        }
        
};
int main()
{
    Complex c1;
    c1.setData(3,4);
    int x;
    x=(int)c1;

    cout<<x<<" "<<c1;
    
    return 0;
}
