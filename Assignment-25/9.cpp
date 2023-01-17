#include <iostream>
using namespace std;

class Rectangle
{
    private:
        float r, area;
    public:
        void setLW(float x)
        {
            r = x; 
        }
        float getr()
        {
            return r;
        }
        float getarea()
        {
            return area;
        }
        void calculateArea()
        {
            area = r*r*3.14159265359;
        }
};

int main()
{
    Rectangle a1, a2;

    a1.setLW(3);
    a2.setLW(54);

    a1.calculateArea();
    a2.calculateArea();

    cout<<"r = "<<a1.getr()<<endl<<"Area = "<<a1.getarea()<<endl;

    cout<<endl;

    cout<<"r = "<<a2.getr()<<endl<<"Area = "<<a2.getarea()<<endl;

    return 0;

}