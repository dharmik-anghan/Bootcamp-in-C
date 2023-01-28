#include <iostream>
using namespace std;

class Numbers
{
    private:
        int x, y, z;
    public:
        void accept()
        {
            cout<<"-------------------"<<endl;
            cout<<"Enter First Number : "<<endl;
            cin>>x;
            cout<<"Enter Second Number: "<<endl;
            cin>>y;
            cout<<"Enter Third Number : "<<endl;
            cin>>z;
            cout<<"-------------------"<<endl;
        }
        void display()
        {
            cout<<x<<endl;
            cout<<y<<endl;
            cout<<z<<endl;
        }
        void operator-()
        {
            x = -x;
            y = -y;
            z = -z;
        }
};

int main()
{
    Numbers n1;

    n1.accept();
    n1.display();
    
    cout<<"-------------------"<<endl;
    -n1;
    n1.display();

    return 0;

}