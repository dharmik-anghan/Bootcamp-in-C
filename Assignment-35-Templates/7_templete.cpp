#include <iostream>
using namespace std;


class Shape
{
    private:
        float x,y;
    public:
        float getX()
        {
            return x;
        }
        float getY()
        {
            return y;
        } 
        Shape(float x, float y)
        {
            this->x = x;
            this->y = y;
        }
        virtual void Display() = 0;
};

template <class A, class B>
class Rectangele : public Shape
{
    public:
        Rectangele(A x, B y) : Shape(x,y)
        {

        }
        void Display()
        {
            cout<<"Area of Rectangle is "<<(getX()*getY());
        }
};

int main()
{

    Rectangele<int, int> r(4,5);
    Rectangele<float, float> r1(4.2,5.4);
    r1.Display();


    return 0;
}