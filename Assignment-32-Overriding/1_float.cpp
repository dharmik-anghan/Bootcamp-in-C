#include <iostream>

using namespace std;

class FLOAT
{
    private:
        float x;

    public:
        FLOAT() {}

        FLOAT(float a)
        {
            x = a;
        }

        FLOAT operator+(FLOAT f)
        {
            return x + f.x;
        }
        FLOAT operator-(FLOAT f)
        {
            return x - f.x;
        }
        FLOAT operator*(FLOAT f)
        {
            return x * f.x;
        }
        FLOAT operator/(FLOAT f)
        {
            return x * f.x;
        }
        void print()
        {
            cout << x;
        }
};

int main()
{
    FLOAT f1 = 2.2;
    FLOAT f2 = 3;
    FLOAT f3 = f1 + f2;

    f3.print();
}