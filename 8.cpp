#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int lenth, width, area;
    public:
        void setLW(int x, int y)
        {
            lenth = x; 
            width = y;
        }
        int getlenth()
        {
            return lenth;
        }
        int getwidth()
        {
            return width;
        }
        int getarea()
        {
            return area;
        }
        void calculateArea()
        {
            area = lenth*width;
        }
};

int main()
{
    Rectangle a1, a2;

    a1.setLW(3,5);
    a2.setLW(54,60);

    a1.calculateArea();
    a2.calculateArea();

    cout<<"Lenth = "<<a1.getlenth()<<endl<<"Width = "<<a1.getwidth()<<endl<<"Area = "<<a1.getarea()<<endl;

    cout<<endl;

    cout<<"Lenth = "<<a2.getlenth()<<endl<<"Width = "<<a2.getwidth()<<endl<<"Area = "<<a2.getarea()<<endl;

    return 0;

}