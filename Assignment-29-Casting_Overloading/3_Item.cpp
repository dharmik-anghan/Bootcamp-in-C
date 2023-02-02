#include <iostream>
using namespace std;


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

};
class Item
{
    private:
        int n;
    public:
        Item() {}
        Item(Product p)
        {
            n = p.getX() + p.getY();
        }
        void display()
        {
            cout<<"Item = "<<n<<endl;
        }
};
int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    i1=p1;

    p1.display();
    i1.display();

    return 0;
}