#include <iostream>
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
        void get_data(double x, double y){
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

int main()
{
    Triangle t;
    Rectangle r;


    t.get_data(5,10);
    r.get_data(5,10);

    t.display();
    r.display();

    return 0;
}