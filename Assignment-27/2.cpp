#include <iostream>
using namespace std;

class Unary
{
    private:
        int x = 5;
    public:
        Unary()
        {

        }
        Unary(int a)
        {
            x = a;
        }
        void operator++()
        {
            ++x;
        }
        void operator++(int dummy)
        {
            x++;
        }
        void operator--()
        {
            --x;
        }
        void display()
        {
            cout<<x<<endl;
        }


};

int main()
{
    Unary a, b;

    ++a;
    a.display();
    
    a++;

    a.display();
    b.display();

    return 0;
}