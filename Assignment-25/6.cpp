#include <iostream>
using namespace std;

class Square
{
    private:
        int square;
        int n;
        static int count;
    public:
        void setN(int x)
        {
            n = x;
            count++;
        }
        int getN()
        {
            return n;
        }
        int getSquare()
        {
            return square;
        }
        int getCount()
        {
            return count;
        }
        void calculatSquare()
        {
            count++;
            square = n*n;
        }
};
int Square :: count = 0;

int main()
{
    Square s1, s2;

    s1.setN(3);
    s2.setN(7);

    s1.calculatSquare();
    s2.calculatSquare();

    cout<<"Square of "<<s1.getN()<<" is "<<s1.getSquare()<<" and "<<s1.getCount()<<" times function has been called." <<endl;
    cout<<"Square of "<<s2.getN()<<" is "<<s2.getSquare()<<" and "<<s2.getCount()<<" times function has been called." <<endl;
    

    return 0;
}