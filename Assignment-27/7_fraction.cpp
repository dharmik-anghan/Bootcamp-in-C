#include <iostream>
using namespace std;

class fraction
{
    private:
        long numerator;
        long denominator;
    public:
        fraction(long int n=0, long int d=0) 
        {
            numerator = n;
            denominator = d;
        }

        friend void operator>>(istream &,fraction &);
        friend void operator<<(ostream &, fraction &);
        
        fraction operator++()
        {
            fraction temp;
            temp.numerator = ++numerator;
            temp.denominator = ++denominator;

            return temp;
        }
        fraction operator++(int dummy)
        {
            fraction temp;
            temp.numerator = numerator;
            numerator++;
            temp.denominator = denominator;
            denominator++;

            return temp;
        }
};
void operator>>(istream &in,fraction &F)
{
    cout<<"Numerator        : ";
    in>>F.numerator;
    cout<<"\nDenominator    : ";
    in>>F.denominator;
}
void operator<<(ostream &os, fraction &F)
{
    cout<<F.numerator<<"/"<<F.denominator;

}

int main()
{
    fraction f1,f2;
    cout<<"f1       :   "<<f1;
    cout<<endl;
    cout<<"f2       :   "<<f2;
    cout<<endl;

    cout<<"Enter First Fraction Value"<<endl;
    cin>>f1;

    f1++;
    cout<<"f1++     :   "<<f1;
    cout<<endl;

    ++f1;
    cout<<"++f1     :   "<<f1;
    cout<<endl;

    cout<<"Enter Second Fraction Value"<<endl;
    cin>>f2;

    f2 = ++f1;
    cout<<"f2 = ++f1"<<endl;
    cout<<"f1     :   "<<f1;
    cout<<endl;
    cout<<"f2     :   "<<f2;
    cout<<endl;

    f2 = f1++;
    cout<<"f2 = f1++"<<endl;
    cout<<"f1     :   "<<f1;
    cout<<endl;
    cout<<"f2     :   "<<f2;
    cout<<endl;




    return 0;
}
