#include <iostream>
using namespace std;

class StatiCount
{
    private:
        int a;
        static int x;
    public:
        StatiCount()
        {

        }
        void increaseStatic()
        {
            a = ++x;
        }
        int getA()
        {
            return a;
        }

};
int StatiCount :: x = 0;

int main()
{
    StatiCount s;

    s.increaseStatic();
    s.increaseStatic();
    s.increaseStatic();

    cout<<s.getA();

    return 0;
}