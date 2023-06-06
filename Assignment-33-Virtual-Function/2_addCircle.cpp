#include <iostream>
#define PI 3.14
using namespace std;

class Shape
{
    private:
        double l1, l2;
    public:
        double getL1(){
            return l1;
        }
        double getL2(){
            return l2;
        }
        void set_data(double x, double y=0){
            l1 = x;
            l2 = y;
        }
        virtual void display() = 0;
};  

class Triangle : public Shape
{
    public:
        void display()
        {
            cout<<"Area Of Triange is "<< (getL1()*getL2())/2<<endl;
        }
};
class Rectangle : public Shape
{
    public:
        void display()
        {
            cout<<"Area Of Triange is "<< getL1()*getL2()<<endl;
        }
};
class Circle : public Shape
{
    public:
        void display()
        {
            cout<<"Area Of Triange is "<< PI*(getL1()*getL1())<<endl;
        }
};

int main()
{
    Triangle t;
    Rectangle r;
    Circle c;


    t.set_data(5,10);
    r.set_data(5,10);
    c.set_data(21);

    t.display();
    r.display();
    c.display();

    return 0;
}