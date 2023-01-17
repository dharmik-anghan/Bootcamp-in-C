#include <iostream>
using namespace std;

class Area
{
    private:
        int lenth, width, areaR, r, a, areaC, areaS;
    public:
        void setLW(int x, int y)
        {
            lenth = x; 
            width = y;
        }
        void setR(int z)
        {
            r = z;
        }
        void setC(int p)
        {
            r = p;
        }
        void setA(int q)
        {
            a = q;
        }
        int getareaR()
        {
            return areaR;
        }
        int getareaC()
        {
            return areaC;
        }
        int getareaS()
        {
            return areaS;
        }
        void calculateAreaR()
        {
            areaR = lenth*width;
        }
        void calculateAreaC()
        {
            areaC = r*r*3.14159265359;
        }
        void calculateAreaS()
        {
            areaS = a*a;
        }
};

int main()
{
    Area rec, circle, square;

    rec.setLW(4,6);
    circle.setR(5);
    square.setA(5);

    rec.calculateAreaR();
    circle.calculateAreaC();
    square.calculateAreaS();

    cout<<"Area of Rectangle is "<<rec.getareaR()<<endl;
    cout<<"Area of Circle is "<<circle.getareaC()<<endl;
    cout<<"Area of Square is "<<square.getareaS()<<endl;    

    return 0;

}