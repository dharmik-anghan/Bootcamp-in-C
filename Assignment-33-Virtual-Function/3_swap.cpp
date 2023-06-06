#include <iostream>
using namespace std;

class A
{
    private:
        int x;
    public:
        A(){}
        A(int x)
        {
            this->x = x;
        }
        void swap(A *num)
        {
            int temp = x;
            x = num->x;
            num->x = temp;
            cout<<num->x<<" "<<x<<endl;

        }
        void display(A num)
        {
            cout<<x<<" "<<num.x<<endl;
        }
};

int main()
{
    A a1(22);
    A a2(33);

    a1.swap(&a2);
    a1.display(a2);
}