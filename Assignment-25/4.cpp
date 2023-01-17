#include <iostream>
using namespace std;

class LargestNumber
{
    private:
        int a, b, c, large;
    public:
        void setValue(int x, int y, int z)
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

        int getLargeValue()
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

    l1.setValue(45,34,21);
    l2.setValue(23,43,5);
    l3.setValue(23,45,76);

    l1.calculateLValue();
    l2.calculateLValue();
    l3.calculateLValue();

    cout<<"Largest value among "<<l1.getA()<<", "<<l1.getB()<<", "<< l1.getC()<< " is "<<l1.getLargeValue()<<endl;
    cout<<"Largest value among "<<l2.getA()<<", "<<l2.getB()<<", "<< l2.getC()<< " is "<<l2.getLargeValue()<<endl;
    cout<<"Largest value among "<<l3.getA()<<", "<<l3.getB()<<", "<< l3.getC()<< " is "<<l3.getLargeValue()<<endl;

    return 0;
}