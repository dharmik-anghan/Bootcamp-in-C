#include <iostream>
using namespace std;
class Item
{
    private:
        int n;
    public:
        Item() {}
        Item(int x)
        {
            n = x;
        }
        
        void display()
        {
            cout<<"Item = "<<n<<endl;
        }
};

class Product
{
    private:
        int x, y;
    public:
        Product() {}
        void setData(int a, int b)
        {
            x = a;
            y = b;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        void display()
        {
            cout<<"X = "<<x<<" Y = "<<y<<endl;
        }
        operator Item()
        {
            Item i(x+y);
            return i;
        }

};

int main()
{
    Product p1;
    p1.setData(3,4);
    Item i1 = p1;

    p1.display();
    i1.display();

    return 0;
}