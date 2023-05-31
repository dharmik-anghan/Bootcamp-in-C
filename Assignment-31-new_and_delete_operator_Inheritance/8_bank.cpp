#include <iostream>
#include <string>
using namespace std;

class Customer
{
    public:
        string name;
        long long int phone_number;
};

class Depositer : public Customer
{
    public:
        int accno,balance;
};
class Borrower : public Depositer
{
    public:
        int loan_no, loan_amt;
    
    void accept()
    {
        cout<<"Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout<<endl<<endl;

        cout<<"Enter Phone No.: ";
        cin>>phone_number;
        cout<<endl<<endl;

        cout<<"Enter A/C No.: ";
        cin>>accno;
        cout<<endl<<endl;

        cout<<"Enter Balance: ";
        cin>>balance;
        cout<<endl<<endl;

        cout<<"Enter Loan No.: ";
        cin>>loan_no;
        cout<<endl<<endl;

        cout<<"Enter Loan Amount: ";
        cin>>loan_amt;
        cout<<endl<<endl;
    }

    void printDetailsOfCustomer()
    {
        cout<<"\nDetails Of Customer";
        cout<<"\n\n-----------------------------------------------------\n\n";

        cout<<"Customer Name              :"<<name<<endl;
        cout<<"Customer Phone No.         :"<<phone_number<<endl;
        cout<<"Customer Customer A/C No.  :"<<accno<<endl;
        cout<<"Customer Balance           :"<<balance;

        cout<<"\n-----------------------------------------------------\n\n";

        cout<<"Loan No                    :"<<loan_no<<endl;
        cout<<"Loan Amount                :"<<loan_amt;

        cout<<"\n-----------------------------------------------------\n";
    }
};

int main()
{   
    cout<<"Enter No. of customer Details You Want\n";

    int n;
    cin>>n;

    Borrower b[n];

    for(int i =0; i < n; i++)
    {
        b[i].accept();
    }

    for(int i =0; i < n; i++)
    {
        b[i].printDetailsOfCustomer();
    }


    return 0;
}