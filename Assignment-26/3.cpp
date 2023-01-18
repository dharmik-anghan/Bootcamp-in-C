#include <iostream>
using namespace std;

class Cube
{
    private:
        int cube, a;
    public:
        Cube()
        {
            a = 1;
        }
        void setA(int x)
        {
            a = x;
        }
        int getA()
        {
            return a;
        }
        int getCube()
        {
            return cube;
        }
        void calculateCube()
        {
            cube = a*a*a;
        }
};

int main()
{
    Cube c1, c2;

    c1.setA(3);
    c2.setA(5);

    c1.calculateCube();
    c2.calculateCube();

    cout<<"Cube of "<<c1.getA()<<" is "<<c1.getCube()<<endl;
    cout<<"Cube of "<<c2.getA()<<" is "<<c2.getCube()<<endl;

    return 0;

    
}