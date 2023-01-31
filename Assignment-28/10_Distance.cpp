#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet, inches;
    public:
        Distance() {}
        Distance(int a, int b)
        {
            feet = a;
            inches = b;
        }

        void operator()(int a, int b, int c)
        {

            feet = a + c + 5;
            inches = a + b + 15;

        }
        void display()
        {
            cout<<feet<<" "<<inches<<endl;
        }
};

int main()
{
    Distance f(2,4);

    f.display();

    f(4,6,7);
    f.display();

    return 0;
}