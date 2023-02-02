#include <iostream>
using namespace std;

class Dollar
{
    private:
        int d;
    public:
        Dollar() {}
        Dollar(int x)
        {
            d = x;
        }
        void display()
        {
            cout<<d<<"$"<<endl;
        }
};

int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.display();
    
    return 0;
}