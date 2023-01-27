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
        Unary operator++()
        {
            return ++x;
        }
        Unary operator++(int dummy)
        {
            return x++;
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
    Unary a;

    
    (++a).display();
    (a++).display();
    a.display();


    return 0;
}
