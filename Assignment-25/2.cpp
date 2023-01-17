#include <iostream>
using namespace std;

class Time
{
    private:
        int hour, min, sec;
    public:
        void setTime(int h, int m, int s)
        {
            hour = h;
            min = m;
            sec = s;
        }

        void showTime()
        {
            cout<<hour<<"h "<<min<<"m "<<sec<<"s"<<endl;
        }
};

int main()
{
    Time t1;

    t1.setTime(3,45,10);
    t1.showTime();

    return 0;
}