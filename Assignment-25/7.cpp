#include <iostream>
using namespace std;

class LargestNumber
{
    private:
        int a, b, c, large;
    public:
        void setABC(int x, int y, int z)
        {
            a = x;
            b = y; 
            c = z;
        }

        int getA()
        {
            return a;
        }
        int getB()
        {
            return b;
        }
        int getC()
        {
            return c;
        }

        int getGretest()
        {
            return large;
        }

        void calculateLValue()
        {
            if(a >= b && a>=c)
                large = a;
            else if(b >= c)
                large = b;
            else    
                large = c;
        }
};

int main()
{
    LargestNumber l1, l2, l3;

    l1.setABC(45,34,21);
    l2.setABC(23,43,5);
    l3.setABC(23,45,76);

    l1.calculateLValue();
    l2.calculateLValue();
    l3.calculateLValue();

    cout<<"Greatest value among "<<l1.getA()<<", "<<l1.getB()<<", "<< l1.getC()<< " is "<<l1.getGretest()<<endl;
    cout<<"Greatest value among "<<l2.getA()<<", "<<l2.getB()<<", "<< l2.getC()<< " is "<<l2.getGretest()<<endl;
    cout<<"Greatest value among "<<l3.getA()<<", "<<l3.getB()<<", "<< l3.getC()<< " is "<<l3.getGretest()<<endl;

    return 0;
}