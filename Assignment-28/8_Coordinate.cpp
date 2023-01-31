#include <iostream>
using namespace std;

class Coordinate
{
    private: 
        int x, y, z;
    public:
        Coordinate() {}

        Coordinate(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }

        void display()
        {
            cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
        }
        Coordinate operator,(Coordinate c)
        {
            Coordinate t;
            t.x = c.z;
            t.y = c.y;
            t.z = c.x;
            return t;
        }
};

int main()
{
    Coordinate c1(2,4,6), c2(1,3,5), c3;

    c3 = (c1,c2);

    c3.display();

    return 0;

}
