#include <iostream>
using namespace std;

class Rectangle
{
    private:
        float are, l, b;
    public:
        void setLB(int x, int y)
        {
            l = x;
            b = y;
        }
        int area()
        {
            return l*b;
        }
};

int main()
{
    Rectangle r1,r2;

    r1.setLB(12,12);
    r2.setLB(12, 15);
    cout<<r1.area()<<endl;
    cout<<r2.area();

}
