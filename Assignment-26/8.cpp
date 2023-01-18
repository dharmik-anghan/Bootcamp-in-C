#include <iostream>
using namespace std;

class Bank
{
    private: 
        float principal, rate_of_interest, interest;
        int year;
    public:
        Bank()
        {
            principal = 0;
            rate_of_interest = 7;
            year = 0;
            interest = 0;
        }
        void setAC(float p, int y)
        {
            principal = p;
            year = y;
        }
        int getPrincipal()
        {
            return principal;
        }
        int getRateOI()
        {
            return rate_of_interest;
        }
        int getYear()
        {
            return year;
        }
        int getROI()
        {
            return interest;
        }
        void calinterest()
        {
            interest = principal * (rate_of_interest*(2022-year)) * 0.01;
        }
};
int main()
{
    Bank b1, b2;

    b1.setAC(3000, 2004);
    b2.setAC(53230, 2020);

    b1.calinterest();
    b2.calinterest();
    
    cout<<endl<<"Principal       : "<<b1.getPrincipal()<<endl<<"Rate of Interest: "<<b1.getRateOI()<<endl<<"Year            : "<<b1.getYear()<<endl<<"Simple Interest : "<<b1.getROI()<<endl<<endl;
    cout<<"Principal       : "<<b2.getPrincipal()<<endl<<"Rate of Interest: "<<b2.getRateOI()<<endl<<"Year            : "<<b2.getYear()<<endl<<"Simple Interest : "<<b2.getROI()<<endl;

    return 0;
}