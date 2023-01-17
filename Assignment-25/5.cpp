#include <iostream>
using namespace std;

class ReverseNumber
{
    private: 
        int reverse=0, n;
    public:
        void setN(int a)
        {
            n = a;
        }

        int getN()
        {
            return n;
        }

        int getReverse()
        {
            return reverse;
        }

        void doReverse()
        {
            int r = n;
            while(r > 0)
            {
                reverse = (reverse*10) + r%10;
                r = r/10;
            }
        }
};

int main()
{
    ReverseNumber r1,r2;

    r1.setN(43532);
    r2.setN(34572);

    r1.doReverse();
    r2.doReverse();

    cout<<"Reverse of "<<r1.getN()<<" is "<<r1.getReverse()<<endl;
    cout<<"Reverse of "<<r2.getN()<<" is "<<r2.getReverse()<<endl;

    return 0;
}