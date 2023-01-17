#include <iostream>
using namespace std;

class Factorial
{
    private:
        int n;
        int fact;
    public:
        void setN(int x)
        {
            n = x;
        }

        int getN()
        {
            return n;
        }

        int getFactorial()
        {
            return fact;
        }

        void calculatefactorial()
        {
            int f=1;
            if(n <= 0)
            {
                fact = 1;
            }
            for(int i = 1; i <= n; i++)
            {
                f *= i;
            }
            fact = f;
        }
};

int main()
{
    Factorial f1, f2;

    f1.setN(5);

    f1.calculatefactorial();
    cout<<"Factorial of "<<f1.getN()<<" is "<<f1.getFactorial()<<endl;

    return 0;
}