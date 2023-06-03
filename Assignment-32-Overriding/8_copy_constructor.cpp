#include <iostream>
using namespace std;

class Factorial
{
    private:
        int n,fact;
    public:
        Factorial(){

        }
        Factorial(int n){
            this->n = n;
            fact = 1;
        }
        Factorial(Factorial &x)
        {
            n = x.n;
            fact = 1;
        }
        void calculate()
        {
            for(int i = 1; i <= n; i++)
            {
                fact = fact*i;
            }
        }
        void display()
        {
            cout<<"\nFactorial : "<<fact<<endl;
        }

};

int main()
{
    int x;
    cout<<"\n Enter Value : ";
    cin>>x;
    Factorial f1(x);
    f1.calculate();
    f1.display();

    Factorial f2(f1);
    f2.calculate();
    f2.display();

    return 0;
}