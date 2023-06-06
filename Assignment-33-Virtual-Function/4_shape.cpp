#include <iostream>
using namespace std;

class Shape
{
    private:
        double l1, l2;
    public:
        double getL1()
        {
            return l1;
        }
        double getL2()
        {
            return l2;
        }
        double get_data(double l1, double l2)
        {
            this->l1 = l1;
            this->l2 = l2;
        }
        virtual void display() = 0;

};

class Triangle : public Shape
{
    public:
        void display()
        {
            if(getL1() == 0 || getL2 == 0)
            {
                cout<<"The variable should be positive\n";
            }else{
                cout<<"Area of Triangle is "<<(getL1()*getL2())/2<<endl;
            }
        }

};

class Rectangle : public Shape
{
    public:
        void display()
        {
            cout<<"Area of Rectangle is "<<(getL1()*getL2())<<endl;
        }
};

int main()
{
    int choice;

    cout<<"1. Area of Triangle : "<<endl;;
    cout<<"2. Area of Rectangle : "<<endl;;
    cout<<"3. Exit : "<<endl;;
    cout<<"Enter Your Choice: ";
    cin>>choice;
    cout<<endl;

    if(choice == 1){
        cout<<"Enter Base and Hight of Triangle : ";
        double x,y;
        cin>>x>>y;
        Triangle T;
        T.get_data(x,y);
        T.display();
    }
    else if(choice == 2){
        cout<<"Enter Length and Hight of Rectangle : ";
        double x,y;
        cin>>x>>y;
        Rectangle R;
        R.get_data(x,y);
        R.display();
    }
    else if(choice == 3){
        return 0;
    }
    else{
        cout<<"Enter Valid Input...\n";
    }

    return 0;
}